#include <stdio.h>

int main (void)
{
    char watch_read[3];
    char practice[3];

    /*
    It should ask "whats your goal?"
    Then have it showing during the whole application on the top
    The First iteration will only ask if you watch the lecture
    if you watched it, then it will ask whether you practice
    if you practice it will ask whether you did it on your own or you didnt remember
    if you did it on your own, then you can continue to the next lesson
    if you didnt do it own you own, then you need to watch/read the lesson again
    */

    /*
    On the next iteration the program should have the date and time when you started it
    open a file (study log)
    read its contents and ask the above
    before closing the app on your las lesson it should ask for how many hours did you
    study and which topic?
    then save, close the file and end the program.
    */

   /*
   The next iteration this should be a chatbot, prob python w machine learning
   Perhaps it can ask me how many hours did i sleep?
   Whats my mood?
   Am i motivated?
   Did i exercise?
   */

    start();
    printf("Did you watch or read the lecture? Yes or No\n");
    scanf("%d\n", &watch_read);
    if watch_read == 'Yes' or "yes"
    {
        printf("Awesome! ");
        //practice();
        printf("Did you practice? done at least one exercise?\n");
        scanf("%d\n", &practice);
        if practice == "Yes"
        {
            printf("Did you do it on your own? Without looking\n");
            scanf("");
            if own == "Yes"
            {
                printf("Nice! Well done, \n");
                start();
            }
        }
        else
        {
            printf("you are cheating yourself, if you dont practice at least 3 times\n");
            practice();
        }
    }
    else
    {
        Printf("Welp, go watch it or read it\n");
    }
}