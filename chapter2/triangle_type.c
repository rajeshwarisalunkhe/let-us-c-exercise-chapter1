// 18 If the three sides of a triangle are entered through the keyboard, write a program to check wheather the triangle is isosceles, equilateral, scalene or right angled triangle.


#include <stdio.h>
int main(void)
{
	float side1, side2, side3, max, addition, x, y, z;
	printf("enter three sides of trianle:");
	scanf("%f%f%f", &side1, &side2, &side3);
	

	x = side1 * side1;
	y = side2 * side2;
	z = side3 * side3;

	if ((side1 == side2) && (side2 == side3))
	{
		printf("it is an equilateral triangle\n");
	}
	else if ((side1 == side2) || (side1 == side3) || (side2 == side3))
	{
		printf("it is an isosceles triangle\n");
	}
	else if ((x == y + z) || (y == x + z) || (z == x + y))
	{
		printf("it is right angled triangle\n");
	}
	else if (!((side1 == side2) && (side2 == side3)))
	{
		printf("it is an scalene triangle\n");
	}

} 
