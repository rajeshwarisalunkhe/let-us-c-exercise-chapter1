/* 22 Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not
*/

#include <stdio.h>

int main(void)
{
	int year;
	printf("enter the year:");
	scanf("%d", &year);

	(year % 400 == 0 ? printf("leap year\n"): printf("not a leap year\n"));
}
