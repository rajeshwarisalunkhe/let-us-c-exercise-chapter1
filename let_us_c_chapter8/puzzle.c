/* 14*/

#include <stdio.h>
int move_down(int a[][4],int i_cord, int j_cord);
int move_left(int a[][4],int i_cord, int j_cord);
int move_up(int a[][4],int i_cord, int j_cord);
int move_right(int a[][4],int i_cord, int j_cord);
void print(int a[][4]);
int main(void)
{

	int a[4][4] = {
				1, 2, 3, 4,
				5, 6, 7, 8,
				9, 10, 11, 12,
				13, 14, 15, 0
		      };
	int choice, temp, i_cord = 3, j_cord = 3, i, j, value_i, value_j;

	do
	{
		printf("press 2: To move elements down\npress 4: To move elements left\n");
		printf("press 6: To move elements right\npress 8: To move elements up\n");
		printf("press 5: Exit\nEnter choice:");
		scanf("%d", &choice);
		printf("\n");

		if(choice == 2)
		{
			if(i_cord == 0)
			{
				printf("can't move elements down\n");
				continue;
			}
			i_cord = move_down(a,i_cord, j_cord);
			
		}
		else if(choice == 4)
		{
			if(j_cord == 3)
			{
				printf("can't move elements left\n");
				continue;
			}
			j_cord = move_left(a,i_cord, j_cord);	
		}
		else if(choice == 8)
		{
			if(i_cord == 3)
			{
				printf("can't move elements up\n");
				continue;
			}
			i_cord = move_up(a,i_cord, j_cord);	
		}
		else if(choice == 6)
		{
			if(j_cord == 0)
			{
				printf("can't move elements right\n");
				continue;
			}
			j_cord = move_right(a,i_cord, j_cord);	
		}
		
		
	}while(choice != 5);
}

int move_down(int a[][4],int i_cord, int j_cord)
{
	int i, j;
	for(i = i_cord;i > 0 ;i--)
	{
		j = j_cord;
		a[i][j] = a[i - 1][j];
		i_cord--;
		
	}
	a[0][j] = 0;
	print(a);
	return i_cord;
		
}
int move_left(int a[][4],int i_cord, int j_cord)
{
	int i, j;
	for(j = j_cord;j < 3 ;j++)
	{
		i = i_cord;
		a[i][j] = a[i][j + 1];
		j_cord++;
		
	}
	a[i_cord][3] = 0;
	print(a);
	return j_cord;
	
}
int move_up(int a[][4],int i_cord, int j_cord)
{
	int i, j;
	for(i = i_cord;i < 3 ;i++)
	{
		j = j_cord;
		a[i][j] = a[i + 1][j];
		i_cord++;
		
	}
	a[3][j] = 0;
	print(a);
	return i_cord;
}
int move_right(int a[][4],int i_cord, int j_cord)
{
	int i, j;
	for(j = j_cord;j > 0 ;j--)
	{
		i = i_cord;
		a[i][j] = a[i][j - 1];
		j_cord--;
	}
	a[i][0] = 0;
	print(a);
	return j_cord;
}

void print(int a[][4])
{
	int i, j;	
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");	
}
