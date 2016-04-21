/* 16 Write a function to evaluate the series 
	       
	sin(x) = x - (x raise to 3 / 3!) + (x raise to 5 / 5!) - (x raise to 7 / 7!) + ...
     
to five significant digits */


#include <stdio.h>

float sin(int number, int x);
long long factorial(int x);
long long power(int x, int y);

int main(void)
{
	int number, x;
	float ans;

	printf("how many digit to evaluate and value of x:");
	scanf("%d%d", &number, &x);
	
	ans = sin(number, x);
	printf("ans is %f\n",ans);

}

float sin(int number, int x)
{
	float add = 0, ans, powerans, fact;
	int pow = 1, counter = 1;
	while(number > 0)
	{
		powerans = power(x, pow);
		fact = factorial(pow);
		ans = powerans / fact;
		
		if(counter % 2 != 0)
		{
			add = add + ans;
		}
		else
		{
			add = add - ans;
		}		
		number--;
		counter++;
		pow = pow + 2;
	}

	return add;

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
