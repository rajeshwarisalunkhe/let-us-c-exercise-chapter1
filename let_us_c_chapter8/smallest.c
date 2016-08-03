/* 10 find the smallest number in an array using pointers */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, *number, size, smallest;

	do
	{
		printf("enter the size of array:");
		scanf("%d", &size);

		if(size == 0)
		{
			printf("size can not be zero");
		}

	}while(size == 0);
	
	number = malloc(size * sizeof(int));
	for(i = 0;i < size;i++)
	{  
		printf("enter the number:");
		scanf("%d", &number[i]);
	}
	smallest = *number;
	

	for(i = 0;i < size;i++)
	{
		if(smallest > *(number + i))
		{
			smallest = *(number + i);
		}
	}
	printf("\n");
	for(i = 0;i < size;i++)
	{  
		printf("%d\t", number[i]);
	}

	printf("\n");
	printf("smallest no is %d\n", smallest);
}
