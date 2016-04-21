/* 3 Write a general purpose function to convert any given year into its roman equivalent.
The following table shows the roman equivalents of decimal numbers
1 = i, 5 = v, 10 = x, 50 = l, 100 = c, 500 = d, 1000 = m

Example Roman equivalent of 1988 is mdcccclxxxviii
        Roman equivalent of 1525 is mdxxv */

void roman(int n);
#include <stdio.h>
int main(void)
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	
	roman(year);
}

void roman(int n)
{
	
	while(n > 0)
	{
		if(n > 1000)
		{
			printf("m");
			n = n - 1000;
		}
		else if(n > 500)
		{
			printf("d");
			n = n - 500;
		}
		else if(n > 100)
		{
			printf("c");
			n = n - 100;
		}
		else if(n > 50)
		{
			printf("l");
			n = n - 50;
		}
		else if(n >= 10)
		{
			printf("x");
			n = n - 10;
		}
		else if(n >= 5)
		{
			printf("v");
			n = n - 5;
		}
		else if(n == 4)
		{
			printf("iv");
			n = n - 4;
		}
		else if(n < 4)
		{
			printf("i");
			n--;
		}
	}
	printf("\n");
}
