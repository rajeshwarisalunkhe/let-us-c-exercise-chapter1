/* 2 Implement the selection sort algorithm on the set of 25 numbers*/

#include <stdio.h>
void selection_sort(int n[], int size);
int main(void)
{
	int i, number[10];

	for(i = 0;i < 10;i++)
	{
		printf("enter the number:");
		scanf("%d", &number[i]);
	}

	selection_sort(&number[0], 10);
}

void selection_sort(int n[], int size)
{
	int j, i, k, temp;
	for(j = 0;j < size;j++)
	{
		for(k = j + 1; k < size;k++)
		{
			if(n[j] > n[k])
			{
				temp = n[j];
				n[j] = n[k];
				n[k] = temp;
				
			}
		}
	}

	for(i = 0;i < size;i++)
	{
		printf("%d\t", n[i]);
	}
}
