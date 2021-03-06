/* 1 Write a macro defination with arguments for calculation of area and the perimeter of triangle,
a square, a circle and a rectangle. Store these macro definations in a file called "areaperi.h"
Include this file in your programe, and call the macro definations for calculating area and perimeter
for different square, triangle, rectagle and circle */

#include <stdio.h>
#include "areaperi.h"

int main(void)
{
	float area, perimeter;
	int radius, breadth_rect, length, side, height, breadth_triangle, side1, side2;

	printf("Enter radius of a circle of which area and circumferene is to be calculated:");
	scanf("%d", &radius);

	area = AREACIRCLE(radius);
	perimeter = PERICIRCLE(radius);

	printf("Area of circle is %f and circumference is %f\n", area, perimeter);

	printf("Enter side of a square of which area and perimeter is to be calculated:");
	scanf("%d", &side);

	area = AREASQUARE(side);
	perimeter = PERISQUARE(side);
	
	printf("Area of square is %f and perimeter is %f\n", area, perimeter);

	printf("Enter length and breadth of a rectangle of which area and perimeter is to be calculated:");
	scanf("%d%d", &length, &breadth_rect);

	area = AREARECT(length, breadth_rect);
	perimeter = PERIRECT(length, breadth_rect);
	
	printf("Area of rectangle is %f and perimeter is %f\n", area, perimeter);

	printf("Enter height and breadth and other two sides of a triangle of which area and perimeter is to be calculated:");
	scanf("%d%d%d%d", &height, &breadth_triangle, &side1, &side2);

	area = AREATRIANGLE(height, breadth_triangle);
	perimeter = PERITRIANGLE(breadth_triangle, side1, side2);
	
	printf("Area of triangle is %f and perimeter is %f\n", area, perimeter);





}
