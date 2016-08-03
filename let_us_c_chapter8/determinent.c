/* 18 A matrix is entered through the keyboard. Write a program to obtain the determinent value of this matrix */


#include <stdio.h>
#include <stdlib.h>

void determinent(int *a, int rows, int column);
int main(void)
{
	int *array, rows, columns,i, j;
	printf("enter no of rows and no of columns of matrix:");
	scanf("%d%d", &rows, &columns);

	array = malloc(rows * columns * sizeof(int));

	for(i = 0;i < rows;i++)
	{
		for(j = 0;j < columns;j++)
		{
			printf("enter array elements:");
			scanf("%d", (array + i*columns + j));
		}
	}

	determinent(array, rows, columns);
	
}

void determinent(int *a, int rows, int columns)
{
	int i = 0, j = 0, ans;

	ans = (*(a + i + j) * *(a + (i + 1) + (j + 1))) - (*(a + (i) + (j + 1)) * *(a + (i + 1) + j));

	printf("ans is %d", ans); 

}
