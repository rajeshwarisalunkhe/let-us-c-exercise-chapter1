/* 19 The natural logarithm can be approximated by the following series

                                2   		       3		     4
[(x - 1)/ x] + [1 / 2(x - 1 / x) ] +  [1 / 2(x - 1 / x) ] +  [1 / 2(x - 1 / x) ] + ...

If x is the input through the keyboard 
write a program to calculate the sum of the first seven terms of this series */ 

#include <stdio.h>
#include <math.h>

int main(void)
{
	float add = 0, i, x;
	

	printf("enter value of x:");
	scanf("%f", &x);
	for(i = 1;i < 8;i++)
	{
		if(i > 1)
		{
			add = add + 0.5 * pow(((x - 1) / x), i);
			printf("%f\n", add);
		}
		else
		{
			add = add + ((x - 1 )/ x); 
			printf("i is 1 add is %f\n", add);		
		}
		//printf("%f\n", add);
	
	}
	printf("sum is %f\n", add);
}
