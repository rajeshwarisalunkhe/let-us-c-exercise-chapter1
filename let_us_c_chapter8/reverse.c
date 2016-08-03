/* 8 Write a program to copy content of one array into another in reverse order */ 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size, *array1, *array2, i, j;

	do
	{
		printf("Enter size:");
		scanf("%d", &size);
		if(size == 0)
		{
			printf("size can not be zero"); 
		}
		
	}while(size == 0);
	
	array1 = malloc(size * sizeof(int));

	for(i = 0;i < size;i++)
	{
		printf("enter element of array:");
		scanf("%d", &array1[i]);
	}

	array2 = malloc(size * sizeof(int));

	for(i = 0, j = size - 1; i < size;i++, j--)
	{
		array2[j] = array1[i];
	}

	printf("reverse array is:");
	for(i = 0;i < size;i++)
	{
		printf("%d\t", array2[i]);
	}
	
	printf("\n");
}
