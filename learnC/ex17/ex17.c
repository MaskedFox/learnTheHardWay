#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

// whats is this suppose to do?
// define fos constants, part of C preprocessor (CPP)... creates a buffer?
#define MAX_DATA 512
#define MAX_ROWS 100

struct Address
{
    int id;
    int set;
    // fixed size for MAX_*
    char name[MAX_DATA];
    char email[MAX_DATA];
};

// Using arrays within an struct, stack based?
struct Database
{
    struct Address rows[MAX_ROWS];
};

struct Connection
{
    // why did we created a pointer to a FILE type?
    // FILE its an struct and you need it to work with file handling
    FILE *file;
    struct Database *db;
};

// die its a new function i should read on 
// die function to abort with an error, kills the program with an error
void die(const char *message, struct Connection *conn)
{
    // errno is set by system calls and some library func in the event of an error 
    // to indicate if anything went wrong, you ll need to use perror or strerror to 
    // convert the return of errno to strings
    // NOTE strerror will return a pointer to the textual representation of the 
    // current errno value
    if (errno)
    {
        // perror is a new function i should read on
        // converts the int error from errno to a string error message
        perror(message);
    }
    else
    {
        printf("ERROR: %s\n", message);
    }
    // Why the exit function? Is it like break?
    // either EXIT_SUCCESS or EXIT_FAILURE 
    // i should try the above (stdlib.h)
    Database_close(conn);
    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("%d %s %s\n", addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn)
{
    // fread is new within this book i prob should read on
    int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
    if (rc != 1)
    {
        die("Failed to load database.", conn);
    }
}

struct Connection *Database_open(const char *filename, char mode)
{
    struct Connection *conn = malloc(sizeof(struct Connection));
    if (!conn)
    {
        die("Memory error", conn);
    }
    conn->db = malloc(sizeof(struct Database));
    if (!conn->db)
    {
        die("Memory error", conn);
    }
    if (mode == 'c')
    {
        // I should prob read on fopen as well
        // Opens the filename into memory and its contents are overwritten
        conn->file = fopen(filename, "w");
    }
    else
    {   
        // open the filename and loads it into memory and 
        // sets up a pointer which points to the first char in it.
        // Opens a text file for both reading and writing
        conn->file = fopen(filename, "r+");
        if (conn->file)
        {
           Database_load(conn);
        }
    }
    if (!conn->file)
    {
        die("Failed to open the file", conn);
    }
    return conn;
}
void Database_close(struct Connection *conn)
{
    if (conn)
    {
        if (conn->file)
        {
            fclose(conn->file);
        }
        if (conn->db)
        {
            free(conn->db);
        }
        free(conn);
    }
}

void Database_write(struct Connection *conn)
{
    // rewind is a new function i should read on
    // It seems fseek its prefeer over rewind, why?
    // Basically w rewind there is no way to check whether
    // the operation was succesful or not, therefore fseek()
    // is encouraged
    // rewind is simples to use if you want just to go back to the beginning of file
    rewind(conn->file);
    // Review and practice this
    // Writes data from the array pointed to, by ptr to the given stream
    int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
    if (rc != 1)
    {
        die("Failed to write Database.", conn);
    }    
    // fflush is a new function i should read on
    // used to clear the buffer and accept the next string
    // review and practice this
    rc = fflush(conn->file);
    if (rc== -1)
    {
        die("Cannot finish database.", conn);
    }
}

void Database_create(struct Connection *conn)
{
    int i = 0;

    for (i = 0; i< MAX_ROWS; i++)
    {
        // Make a prototype to initialize it
        struct Address addr = {.id = i, .set = 0};
        // Then just assign it
        conn->db->rows[i] = addr;
    }
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
    struct Address *addr = &conn->db->rows[id];
    if (addr->set)
    {
        die("Already set, delete it first", conn);
    }
    addr->set = 1;
    // WARNING: bug, read the "How to break it" and fix this
    // strncpy is a new function i should read on
    // Used to copy one string to another.
    // Returns a pointer to the destination string
    // (char *dest, const char *src, size_t n)
    char *res = strncpy(addr->name, name, MAX_DATA - 1);
    // to prevent a Buffer Overflow
    addr->name[MAX_DATA - 1] = '\0';
    if (!res)
    {
        die("Email copy failed", conn);
    }
}

void Database_list(struct Connection *conn)
{
    int i= 0;
    struct Database *db = conn->db;

    for (i = 0; i<MAX_ROWS; i++)
    {
        struct Address *cur = &db->rows[i];

        if(cur->set)
        {
            Address_print(cur);
        }
    }
}

void Database_get(struct Connection *conn, int id)
{
    struct Address *addr = &conn->db->rows[id];

    if(addr->set)
    {
        Address_print(addr);
    }
    else
    {
        die("ID is not set", conn);
    }
}

void Database_delete(struct Connection *conn, int id)
{
    struct Address addr = {.id = id, .set = 0};
    conn->db->rows[id] = addr;
}


int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        die("USAGE: ex17 <dbfile> <action> [actions params]", NULL);
    }

    char *filename = argv[1];
    // 2d array, why?
    char action = argv[2][0];
    struct Connection *conn = Database_open(filename, action);
    int id = 0;

    if (argc > 3) 
    {
        // atoi is a new function i should prob read about
        // converts the string to an int
        // ex: strNum = "1984"
        // strNumToInt = atoi(strNum)
        // strNumToInt has 1984 as numbers or int 
        id = atoi(argv[3]);
    }
    
    if (id >= MAX_ROWS)
    {
        die("There's not that many records.", conn);
    }

        switch (action)
        {
            case 'c':
                Database_create(conn);
                Database_write(conn);
                break;
            
            
            case 'g':
                if (argc != 4)
                {
                    die("Need an id to get", conn);
                }
                Database_get(conn, id);
                break;
             
            case 's':
                if (argc != 6)
                {
                    die("Need id, name, email to set", conn);
                }
                Database_set(conn, id, argv[4], argv[5]);
                Database_write(conn);
                break;
            case 'd':
                if (argc != 4)
                {    
                    die("Need id to delete", conn);
                }
                Database_delete(conn, id);
                Database_write(conn);
                break;

            case 'l':
                Database_list(conn);
                break;
            default:
                die("Invalid action: c=create, g=get, s=set, d=del, l=list", conn);
        }
    
        Database_close(conn);
        return 0;
}

/* How to Break it
#1: No idea what do here =/
#2: Done
#3: Done 
#4: Done
#5: Waiting to do the Extra Credit to come back to this
*/

/* Extra Credit
#1: 
#2:
#3:
#4:
#5:
#6:
*/