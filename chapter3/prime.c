/* 10 Write a program to print all the prime numbers between 1 to 300*/

#include <stdio.h>

int main(void)
{
	int i, j;
	
	for(i = 1; i <= 300;i++)
	{
		for(j = 2;j <= i;j++)
		{
			if(i % j == 0 )
			{
				if(i == j)
				printf("%d\t", i);
				break;
			}
		}
	}	
	
}
