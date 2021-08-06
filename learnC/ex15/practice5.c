 #include <stdio.h>

int main(void)
{
    //! showMemory(start=65520)
    char *arrayWor[4]={"hola","chau","bueno","Nada"};
    //points to *arrayWor and dereferenced at the same time, Boom!
    //Feel awaken...
    char **ptrWor = arrayWor;
    int i = 0;
    //printf("printing size of %d", sizeof(arrayWor));
    //the below prints 16, because we are using 4bytes(int) of memory per word in the array
    // so we need to divide by 4 in this case
    for(i=0;i<4; i++)
    {
        *ptrWor = "Hello";
        //printf("printing array index %d %p with word %s\n",i,&ptrWor[i], *(ptrWor+i));
        //or 
        printf("printing array index %d %p with word %s\n",i,&ptrWor[i], ptrWor[i]);
    }
    
    
    return 0;
}  