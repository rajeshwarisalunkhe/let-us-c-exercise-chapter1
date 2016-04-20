//5) The length and breadth of a rectangle and radius of a circle are input through the keyboard.Write a program to calculate the area and perimeter of the rectangle and area and circumference of the circle. 

#include <stdio.h>
int main(void)
{
	float length, breadth, radius, perimeter, area_rect, area_circle, circumference;

	printf("enter length and breadth of rectangle and radius of circle ");
	scanf("%f %f %f", &length, &breadth, &radius);

	perimeter = 2 * (length + breadth);
	area_rect = length * breadth;
	area_circle = 3.14 * radius * radius;
	circumference = 3.14 * 2 * radius;

	printf("perimeter of rectangle is %f\narea of rectangle is %f\n", perimeter, area_rect);
	printf("area of circle is %f\ncircumference of circle is %f\n",area_circle, circumference);
}
