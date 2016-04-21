// 12 Given a point x and y, write a program to find out if it lies on the x-axis, y-axis or the origin.

#include <stdio.h>

int main(void)
{
	int x, y;
	printf("enter a point with it's x and y coordinate:");
	scanf("%d%d", &x, &y);

	if (x == 0 && y == 0)
	{
		printf("point is on origin\n");
	}
	else if(x == 0)
	{
		printf("point is on y axis\n");
	}
	else if(y == 0)
	{
		printf("point is on x axis\n");
	}
	
} 
