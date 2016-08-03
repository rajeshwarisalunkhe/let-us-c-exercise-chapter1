/* 17 Write a program to multiply any two 3 * 3 matrices */ 


#include <stdio.h>
#include <stdlib.h>
void enter_matrix(int **a, int row, int column);
void print(int **array, int row, int column);
void multiplication(int **a, int **b, int row, int column);
int main(void)
{
	int **a, **b, r1, c1, r2, c2, i, j;

	do
	{
		printf("enter number of rows and columns of matrices:");
		scanf("%d%d", &r1, &c1);
		r2 = r1;
		c2 = c1;
		if(r1 <= 0 || c1 <= 0 || r2 <= 0 ||c2 <= 0)
		{
			printf("number of rows or column can not be zero or negative\n");
		}
	}while(r1 <= 0 || c1 <= 0 || r2 <= 0 ||c2 <= 0);

	
	a = malloc((r1 * c1) * sizeof(int));

	printf("enter elements of first array:");
	enter_matrix(a, r1, c1);

	printf("You entered:\n");
	print(a, r1, c1);
	
	b = malloc((r2 * c2) * sizeof(int));

	printf("enter elements of second array:");
	enter_matrix(b, r2, c2);
	
	printf("You entered:\n");
	print(b, r2, c2);

	printf("matrix multiplication is :\n");
	multiplication(a, b, r1, c1);
	 
	
}

void enter_matrix(int **array, int row, int column)
{
	int i, j;

	for(i = 0;i < row;i++)
	{
		for(j = 0;j < column;j++)
		{
			scanf("%d", &array[i][j]);
		}
	} 
}

void print(int **array, int row, int column)
{
	int i, j;

	for(i = 0;i < row;i++)
	{
		for(j = 0;j < column;j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}


}

void multiplication(int **a, int **b, int row, int column)
{
	int i, j, ans = 0;
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < column;j++)
		{
			ans = ans + (a[i][j] * b[j][i]);
		}
		printf("%d", ans);
	}
	
}
