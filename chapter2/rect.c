// 9 Given the length and breadth of a rectangle write a program to find wheather the area of a rectangle is greater than its perimeter. for eg. the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

#include <stdio.h>

int main(void)
{
	int length, breadth, area, perimeter;

	printf("enter length and breadth of rectangle:");

	scanf("%d%d", &length, &breadth);

	area = length * breadth;

	perimeter = 2 * (length + breadth);

	if(area > perimeter)
	{
		printf("area is greater than the perimeter\n");
	}
	else
	{
		printf("area is less than the perimeter\n");
	}
}
