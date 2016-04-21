// 7 write a proram to check wheather the triangle is valid or not, when the three angles of triangle are entered through the keyboard. A triangle is valid if the sum of the all the three angles is 180

#include <stdio.h>

int main(void)
{
	int first, second, third, add;
	printf("enter three angles of a trianle:");
	scanf("%d%d%d", &first, &second, &third);

	add = first + second + third;

	if(add == 180)
	{
		printf("the triangle is valid\n");
	}
	else
	{
		printf("triangle is not valid\n");
	}
}
