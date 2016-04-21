// 10 Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all three points fall on a straight line

#include <stdio.h>

int main(void)
{
	int x1, x2, x3, y1, y2, y3, slope1, slope2;
	printf("enter three point with it's x and y coordinate");
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

	slope1 = (y2 - y1) / (x2 - x1);
	
	slope2 = (y3 - y1) / (x3 - x1);

	if (slope1 == slope2)
	{
		printf("points are colinear\n");
	}
	else
	{
		printf("points are not colinear\n");
	}
	
} 
