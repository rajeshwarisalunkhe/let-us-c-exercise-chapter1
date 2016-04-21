/* 18 Write a function to compute the greatest comman devisor given by Euclid's algorithm
exemplified for j = 1980, k = 1617 as follows

1980 / 1617 = 1		1980 - (1 * 1617) = 363
1617 / 363 =  4		1617 - (4 * 363)  = 165
363 / 165 = 2		363 - (165 * 2) = 33
165 / 33 = 5 		165 - (5 * 33) = 0

thus gcd is 33 */

#include <stdio.h>

int hcf(int x, int y);

int main(void)
{
	int first, second, temp;

	printf("enter two numbers:");
	scanf("%d %d", &first, &second);

	if(first > 0 && second > 0)
	{
		
		if(first > second)
		{
			printf("hcf is %d\n", hcf(first, second));
		}
		else
		{
			printf("hcf is %d\n", hcf(second, first));
		}
	}
	else
	{
		printf("please enter both positive number\n");
	}
}

int hcf(int x, int y)
{
	int quotient, reminder = 1;

	
	while( reminder > 0)
	{
		quotient = x / y;
		reminder = x - (quotient * y);
		x = y;
		y = reminder;
	}
			
	return x;
}

