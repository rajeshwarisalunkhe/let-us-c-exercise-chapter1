/* 12 Write a program to add first seven terms of the following series for loop

1/1! + 2/2! + 3/3!+.......
*/

#include <stdio.h>

int main(void)
{
	float i,add = 0, factorial = 1, j; 
	for(i = 1;i < 8;i++)
	{
		for(j = i;j > 0;j--)
		{
			factorial = factorial * j;
		}
		
		add = add + (i / factorial); 
		
	}
	printf("%f\n",add);
}
