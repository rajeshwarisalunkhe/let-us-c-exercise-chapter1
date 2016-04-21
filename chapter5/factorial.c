/* 1 Write a function to calculate the factorial value of any integer entered through the keyboard*/


#include <stdio.h>
long long factorial(int x);
int main(void)
{
	long long ans, number;
	printf("enter the number of which factorial is to be found:");
	scanf("%lld",&number);
	
	ans = factorial(number);
	
	printf("factorial of %lld is %lld\n", number, ans);


} 

long long factorial(int x)
{
	int i;
	long long fact = 1;
	for(i = 1;i <= x;i++)
	{
		fact = fact * i;
	}
	
	return fact;
}
