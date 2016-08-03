/* 3) bubble sort*/

#include <stdio.h>
void bubble_sort(int n[], int size);
int main(void)
{
	
	int i, number[10];

	for(i = 0;i < 10;i++)
	{
		printf("enter the number:");
		scanf("%d", &number[i]);
	}

	bubble_sort(&number[0], 10);
}

void bubble_sort(int n[], int size)
{
	int j, i, k, temp;
	for(j = 0;j < size;j++)
	{
		for(k = 0; k < size - 1;k++)
		{
			if(n[k] > n[k + 1])
			{
				temp = n[k];
				n[k] = n[k + 1];
				n[k + 1] = temp;
				
			}
		}
	}

	for(i = 0;i < size;i++)
	{
		printf("%d\t", n[i]);
	}


}
