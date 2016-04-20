//8) If a five digit number is input through the keyboard write a program to reverse the number

#include <stdio.h>

int main(void)
{
	int number, reverse_no = 0, x = 1, num, digit;
	printf("enter a five digit number:");
	scanf("%d", &number);
	num = number;
	
	do
	{
		num = num / 10;
		x = x * 10;
	}while(num > 10);
	
	while(number > 0)
	{
		digit = number % 10;
		reverse_no = reverse_no + x * digit;
		x = x / 10; 
		number = number / 10;
	}
	printf("after reversing %d\n", reverse_no);
	
}
