/* 12 A positive integer is entered through the keyboard, Write a function to find the binary equivalent of this number

1) Without recursion
2) With recursion */

#include <stdio.h>
int binary(int number);
int main(void)
{
	int number, ans;

	printf("enter a decimal number:");
	scanf("%d", &number);

	ans = binary(number);
	
	printf("binary equivalent is %d\n", ans);

}

int binary(int number)
{
	int reminder, add = 0, i = 1;
	while(number > 0)
	{
		reminder = number % 2;
		add =  add + reminder * i;
		i = i * 10;
		number = number / 2; 
	}
	
	return add;
}
