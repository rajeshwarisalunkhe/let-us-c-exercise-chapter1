/* 5 A positive integer is entered through the keyboard. Write a function to obtain the prime factor of this number.
for example prime factors of 24 are 2, 2, 2 and 3, whereas prime factor of 35 are 5 and 7. */

#include <stdio.h>
void prime_factor(int x);
int main(void)
{
	int number;
	
	printf("enter the number:");
	scanf("%d",&number);
	

	prime_factor(number);
}

void prime_factor(int x)
{
	int i, quotient;
	
	for(i = 2;i <= x;)
	{
		while(x % i == 0)
		{
			quotient = x / i;
			printf("%d\t", i);
			x = quotient;
			
		}
		i++;
	}
	if(x == 0)
	{
		printf("zero does not have prime factors\n");
	}
	printf("\n");
}
