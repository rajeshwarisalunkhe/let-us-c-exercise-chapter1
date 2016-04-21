/* 11 Given a coordinate (x,y) of a center of a circle and it's radius, 
write a program which will determine whether a point lies inside the circle, 
on the circle or outside the circle */

#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y, radius, pointx, pointy, distance_square, distance;
	printf("enter the cetre co-ordinate and radius:");
	scanf("%f%f%f", &x, &y, &radius);

	printf("enter x and y coordinate of a point:");
	scanf("%f%f", &pointx, &pointy);

	distance_square = ((pointx - x) * (pointx - x) + (pointy - y) * (pointy - y));
	distance = sqrt(distance_square);
	
	if(distance < radius )
	{
		printf("point lies inside the circle\n");
	}
	else if(distance == radius)
	{
		printf("point lies on the circle\n");	
	}
	else
	{
		printf("point lies outside the circle\n");
	}


} 
