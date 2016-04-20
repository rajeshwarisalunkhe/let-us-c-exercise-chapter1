// 9) If a four digit number is input through the keyboard write a program to obtain the sum of the first and last digit of the number

#include <stdio.h>

int main(void)
{
	int number, addition = 0, last_digit, first_digit;
	printf("enter a four digit number:");
	scanf("%d", &number);
	
	
	last_digit = number % 10;
	first_digit = number / 1000;
	addition = last_digit + first_digit;
	
	
	printf("addition of first and last digit is %d\n", addition);
	
}
