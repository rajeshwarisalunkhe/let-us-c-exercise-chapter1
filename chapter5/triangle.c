/* 15 If the length of the sides of a triangle are denoted by a, b, c then area of triangle is given by

area = squart(S(S - a)(S - b)(S - c))

Where S = (a + b + c)/2

Write a function to calculate the area of the triangle*/

#include <stdio.h>
#include <math.h>

float area(float a, float b, float c);
int main(void)
{
	float a, b, c, ans;
	printf("enter length of three sides:");
	scanf("%f%f%f", &a, &b, &c);

	ans = area(a, b, c);
	printf("area of triangle is %f\n", ans);
}

float area(float a, float b, float c)
{
	float s, ans;

	s = (a + b + c) / 2;
	
	ans = sqrt(s * (s - a) * (s - b) * (s - c));
	
	return ans;

}


