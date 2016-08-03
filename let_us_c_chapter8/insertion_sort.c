/* 4 insertion sort */

#include <stdio.h>
void insertion_sort(int n[], int size);
int main(void)
{
	int i, number[5];

	for(i = 0;i < 5;i++)
	{
		printf("enter the number:");
		scanf("%d", &number[i]);
	}

	insertion_sort(&number[0], 5);
}

void insertion_sort(int n[], int size)
{
	int j, i, k, temp;
	for(j = 0;j < size ;j++)
	{
		for(k = j; k < size ;k++)
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
