//7) If a five digit number is input through the keyboard, write a program to calculate the sum of the digit

#include <stdio.h>
int main(void)
{
	int number, addition = 0, last_digit;
	printf("enter a five digit number:");
	scanf("%d", &number);
	
	while(number > 0)
	{
		last_digit = number % 10;
		addition = addition + last_digit;
		number = number / 10;
		
	}
	printf("adition is %d\n", addition);
}
