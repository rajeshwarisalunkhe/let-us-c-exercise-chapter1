// 5 if a five digit number is input through the keyboard.Write a program to obtain the reversed number and to determine wheather the original and reverse number are equal or not

#include <stdio.h>

int main(void)
{
	int number, num, reverse_no = 0, x = 10000, digit;
	printf("enter a five digit number:");
	scanf("%d", &number);
	num = number;
	while(number > 0)
	{
		digit = number % 10;
		reverse_no = reverse_no + x * digit;
		x = x / 10; 
		number = number / 10;
	}
	if(num == reverse_no)
	{
		printf("original and reverse number are equal\n");
	}
	else
	{
		printf("original and reverse number are not equal\n");
	}
	
}
