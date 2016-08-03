/* 11 Write a proram to interchange the odd and even elements of an array */

#include <stdio.h>
# define SIZE 10
int main(void)
{	
	int array1[SIZE], array2[SIZE], i, j;

	printf("enter array element:");

	for(i = 0; i < SIZE;i++)
	{
		scanf("%d", &array1[i]);
	}
	
