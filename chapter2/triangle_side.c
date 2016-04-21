// 17 If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid if the sum of the two sides is greater than the largest of the three sides

#include <stdio.h>

int main(void)
{
	float side1, side2, side3, max, addition;
	printf("enter three sides of trianle:");
	scanf("%f%f%f", &side1, &side2, &side3);
	
	if(side1 > side2 && side1 > side3)
	{
		max = side1;
		addition = side2 + side3;
	}
	else if(side2 > side1 && side2 > side3)
	{
		max = side2;
		addition = side1 + side3;
	}
	else if(side3 > side1 && side3 > side2)
	{
		max = side3;
		addition = side1 + side2;
	}
	
	if(max < addition)
	{
		printf("triangle is valid\n");
	}
	else
	{
		printf("triangle is not valid\n");
	}
}

 
