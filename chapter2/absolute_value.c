// 8 find the absolute value of a number entered through the keyboard

#include <stdio.h>

int main(void)
{
	int number;
	printf("enter any number:");
	scanf("%d",&number);
	
	if(number == 0)
	{
		printf("absolute value of number is 0\n");
	}
	else if (number > 0)
	{
		printf("absolute value of number is %d\n", number);
	}
	else if (number < 0)
	{
		printf("absolute value of number is %d\n", -number);
	}
}
