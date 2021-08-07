#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    /*
    Your program should first read, from the user input, 
    the number of players participating in the game. 
    There are never more than 10 players in the game.
    */
    scanf("%d", &N);
    //Next, your program should read the current scores 
    //of each player and store them in an array. 
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    /*
    Then you should call the function behind(), 
    to which you pass as a first argument, the array holding the player's scores, 
    and as a second argument the number of players in the game. 
    The function behind should replace the scores stored in the array 
    with the number of points by which each individual player is behind 
    the top-scoring player.
    */
    behind(array, N);
    
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */
void behind(int *array, int N)
{
    //who is the top player?
    int i;
    int Pl;
    int topPl = 0;
    for (i = 0; i < N; i++)
    {
        Pl = array[i];
        //printf("PLayer %d\n", Pl);
        if (Pl > topPl)
        {
            topPl = Pl;
        }         
    }
    //printf("Current Top Player: %d\n", topPl);  

    //now that you have the top player loop through the array
    // so you can replace the current index with 
    // the top player - the current score
    for(i = 0; i < N; i ++)
    {   array[i] = topPl - array[i];
        //printf("%d\n",* (array + i));
    }
    //printf("\n");
}