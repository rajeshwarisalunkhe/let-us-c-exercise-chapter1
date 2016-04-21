// 2) Write a program to find the factorial value of any number entered through the keyboard

#include <stdio.h>

int main(void)
{
	int number, factorial = 1;
	printf("enter number:");
	scanf("%d", &number);

	while(number > 0)
	{
		factorial = factorial * number;
		number--;
	}
	printf("factorial is %d\n", factorial);

}
