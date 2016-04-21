/* 16 Write a program to produce following output


			1
		2		3
	4		5		6	
7		8		9		10 */

#include <stdio.h>

int main(void)
{
	int i, j, k, number = 1;
	for(i = 0;i < 4;i++)
	{
		for(j = i;j < 3;j++)
		{
			printf("\t");
		}
		for(k = 0;k <= i;k++)
		{
			printf("%d\t\t",number);
			number++;
		}
		printf("\n");
	}
}
