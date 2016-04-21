/* 6 Write a function which receives a float and an int from main(), finds the product of these two
and returns the product which is printed through main() */ 

#include <stdio.h>
float product(int x, float y);
int main(void)
{
	int a;
	float b, ans;

	printf("enter two numbers:");
	scanf("%d%f", &a, &b);
	
	ans = product(a, b);
	
	printf("ans is %f\n", ans);
}

float product(int x, float y)
{
	float ans;
	
	ans = x * y;
	
	return ans;
}


