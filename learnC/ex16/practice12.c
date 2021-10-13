/*
In this problem you will continue developing the data feature which you started implementing
 in the previous problem. You will implement a "tomorrow" feature in the C programming 
 language via a function called "advanceDay()". The function advanceDay() should take as 
 input a date (stored in a struct date) and return the date of the following day. 
 You do not have to take into account leap years (although you may if you wish to). 
 That is, it is okay for your function to always return March 1 as the day 
 following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as 
the function prototypes for the readDate(), printDate(), and advanceDate() functions. 
Do not modify any of the given code. Simply add your function definitions underneath the main() 
function. For the readDate() and printDate() functions you may simply copy and paste the code 
you developed in the previous task.
*/

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date *today){
        printf("please enter today's date by year(4 digits), month and day: ");
        scanf("%d %d %d", &today->year, &today->month, &today->day);
    }

void printDate(struct date day){
        printf("%.2d/%.2d/%d\n", day.month, day.day,day.year);
    }
// this function should return the date of tomorrow
// if month is 12/31/2019 then tomorrow shouldbe 01/01/2020
struct date advanceDay(struct date today){
        int dMonths[12];
        dMonths[1] = 31;
        dMonths[2] = 28;
        dMonths[3] = 31;
        dMonths[4] = 30;
        dMonths[5] = 31;
        dMonths[6] = 30;
        dMonths[7] = 31;
        dMonths[8] = 31;
        dMonths[9] = 30;
        dMonths[10] = 31;
        dMonths[11] = 30;
        dMonths[12] = 31;

        int i;
        for (i=1; i<=12; i++)
        {
            
            if (i == today.month)
            {
                if (today.day < dMonths[i])
                {
                    today.day +=1;
                }
                else if (today.month == 12)
                {
                    today.day = 1;
                    today.month = 1;
                    today.year = today.year + 1;
                }
                else
                {
                    today.day = 1;
                    today.month = today.month + 1;
                    break;
                }
                
            }
        }
        
        return today;   
}


