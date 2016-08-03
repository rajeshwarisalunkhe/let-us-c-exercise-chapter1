/* Write a program to sort a set of names stored in an array in alphabetical order*/


#include <stdio.h>

int main(void)
{
	char name[5][10], *temp;

	int i, j, k, l;

	printf("enter name one by one:");
	
	for(i = 0;i < 5;i++)
	{	
		scanf("%s", &name[i]);
	}
	
	printf("names after sorting:");
	for(k = 0;k < 5;k++)
	{	
		for(i = 0;i < 4;i++)
		{	
			for(l = 0;l < 10;l++)
			{
				if(name[i][l] > name[i + 1][l])
				{
					for(j = 0;j < 10;j++)
					{			
						*temp = name[i][j];
						name[i][j] = name[i + 1][j];
						name[i + 1][j] = temp[j];
					}
					break;
				}
			}
		}

	}

	for(i = 0;i < 5;i++)
	{
		printf("%s\n", name[i]);
	}
}	
