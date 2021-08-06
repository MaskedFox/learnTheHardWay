#include <stdio.h>

//Write your function prototype here
void allowToDrink(int *);

int main(void)
{
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
    allowToDrink(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void allowToDrink(int *age)
{
    if (*age <= 20)
    {
        *age = *age * 2;
    }
    else
    {
        *age = *age - 10;
    }
}