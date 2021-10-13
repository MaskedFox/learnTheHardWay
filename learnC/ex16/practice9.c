#include <stdio.h>

struct date 
{
    int year;
    int month;
    int day;
};

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *da)
{
    scanf("%d %d %d", &(*da).year, &(*da).month, &(*da).day);
}

void printDate(struct date da)
{
    printf("%.2d/%.2d/%d\n", da.day, da.month, da.year);
}
