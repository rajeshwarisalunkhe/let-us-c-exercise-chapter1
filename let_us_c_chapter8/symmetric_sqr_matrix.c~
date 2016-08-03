 /* 14 Write a program to find if a square matrix is symmetric */

#include <stdio.h>

int main(void)
{
	int array_trans[4][4],array[4][4], i, j, temp, flag = 0;

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

	for(i = 0;i < 4;i++)
	{
		for(j = i;j < 4;j++)
		{
			if(array[i][j] != array_trans[i][j])
			{
				flag = 1;
			}
			
		}
	}

	if(flag == 1)
	{
		printf("it is not a symmetric square matrix\n");
	}
	else
	{
		printf("it is a symmetric square matrix\n");
	}

}
