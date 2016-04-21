/* 8 write a program to receive an integer and find its octal equvivalent */

#include <stdio.h>

int main(void)
{
	int number, reminder, octal = 0, i = 1;
	printf("enter a number:");
	scanf("%d", &number);
	
	while(number > 0)
	{
		reminder = number % 8;
		number = number / 8;
		octal = octal +  (reminder * i);
		//octal = octal* i;
		i = i * 10; 
		
	}
	printf("octal is %d\n",octal);

}
