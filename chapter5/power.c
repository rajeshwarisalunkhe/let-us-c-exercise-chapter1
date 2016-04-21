/* 2 Write a function power(a, b) to calculate value of a raise to b */

#include <stdio.h>
long long power(int x, int y);
int main (void)
{
	int number, raise_to;
	long long ans;
	printf("enter the number and power to be obtained:");
	scanf("%d%d", &number, &raise_to);

	ans = power(number, raise_to);

	printf("%d raise to %d is %lld\n", number, raise_to, ans);

	

}

long long power(int x, int y)
{
	int i;
	long long ans = 1;

	for(i = 0;i < y;i++)
	{
		ans =  ans * x;
	}
	
	return ans;

}
