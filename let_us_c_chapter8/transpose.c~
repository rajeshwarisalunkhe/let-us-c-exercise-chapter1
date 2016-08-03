 /* 13 Write a program to obtain transpose of a 4 * 4 matrix.
The transpose of a matrix is obtained by exchanging the elements of each row 
with the elements of the corresponding column */

#include <stdio.h>

int main(void)
{
	int array_trans[4][4],array[4][4], i, j, temp;

	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("enter elemets of array:");
			scanf("%d", &array[i][j]);
			array_trans[i][j] = array[i][j]; 
			
		}
	}

	for(i = 0;i < 4;i++)
	{
		for(j = i;j < 4;j++)
		{
			if(i != j)
			{
				temp = array_trans[i][j]; 
				array_trans[i][j] = array_trans[j][i];
				array_trans[j][i] = temp;
			}
			
		}
	}

	printf("matrix enter by you:\n");
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}

	printf("transpose of a matrix is:\n");
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("%d\t",array_trans[i][j]);
		}
		printf("\n");
	}

}
