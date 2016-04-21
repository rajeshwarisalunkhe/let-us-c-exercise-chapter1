// 2 Any integer is input through the keyboard. Write a proram to find out wheather it is an odd number or even number


#include <stdio.h>

int main(void)
{
	int number;
	printf("enter a number:");
	scanf("%d",&number);

	if(number % 2 == 0)
	{
		printf("number is even\n");	
	}
	else
	{
		printf("number is odd\n");
	}
} 
