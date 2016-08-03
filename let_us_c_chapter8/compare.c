/* 9 If an array arr contains n elements, then write a program to check if arr[0] = arr[n - 1]
arr[1] = arr[n - 2] and so on */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int size, *arr, flag = 0, i, j;

	do
	{
		printf("Enter size:");
		scanf("%d", &size);
		if(size == 0)
		{
			printf("size can not be zero\n"); 
		}
		
	}while(size == 0);

	arr = malloc(size * sizeof(int));

	for(i = 0;i < size;i++)
	{
		printf("enter element of array:");
		scanf("%d", &arr[i]);
	}

	for(i = 0, j = size - 1; i < j; i++,j--)
	{
		if(arr[i] != arr[j])
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("elements are same\n");
	}
	else
	{
		printf("elements are not same\n");
	}
}
