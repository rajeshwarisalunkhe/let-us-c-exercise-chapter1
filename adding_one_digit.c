// 13 If a five digit number is input through the keyboard write a program to print a new number by adding one to each of its digits. 
//for example the input no is 12391 the output should be 23402


#include <stdio.h>

int main(void)
{
	int number, division, divisor = 1, new_number = 0;	
	printf("enter a five digit number:");
	scanf("%d", &number);
	
	while(number > 0)
	{
		division = number % 10;
		number = number / 10;
		if (division == 9)
		{
			new_number = new_number + 0;
		}
		else
		{
			division++;
			new_number = new_number + (divisor * (division));
		}		
		divisor = divisor * 10;
		
	}
	printf("%d\n", new_number);
}
