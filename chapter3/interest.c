/* 18 When interest compounds q timess per year at an rate of r% for n years,
the principle p compounds to an amount a as per the following formula

		nq
a = p(1 + r / q)

write a program to read 10 sets of p, r, n, q and calculate corresponding a
*/


#include <stdio.h>
#include <math.h>

int main(void)
{
	float p, r, n, q, a, i;
	
	for(i = 0;i < 10;i++)
	{
		printf("enter value of p, r, n and q:");
		scanf("%f%f%f%f", &p, &r, &n, &q);

		a = p * pow((1 + r / q),(n*q));

		printf("amount is %f", a);
	}
}
