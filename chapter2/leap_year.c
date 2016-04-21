// 3 Any year is input thriugh the keyboard. Write a program to wheather the year is leap year or not

#include <stdio.h>

int main(void)
{
	int year;
	printf("enter year:");
	scanf("%d", &year);

	if(year % 400 == 0)
	{
		printf("it is a leap year\n");
	}
	else
	{
		printf("it is not a leap year\n");
	}
} 
