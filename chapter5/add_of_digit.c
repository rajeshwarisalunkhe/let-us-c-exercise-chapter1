/* 9 A five digit positive integer is entered htrough the keyboard
Write a function to calculate sum of the digits of five digit number
1) without using recursion
2) with using recursion */

#include <stdio.h>
int add(int num);
int main(void)
{
	int num, addition;
	printf("enter a number:"); 
	scanf("%d", &num);
	
	addition = add(num);
	
	printf("addition of digit is %d\n", addition);
} 

int add(int num)
{
	int reminder, addition = 0;
	while(num > 0)
	{
		reminder = num % 10;
		addition = addition + reminder;
		num = num / 10;
		
	}
	
	return addition;
}
