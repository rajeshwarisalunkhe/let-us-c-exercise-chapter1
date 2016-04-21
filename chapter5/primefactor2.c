/* 10 A positive integer is entered through the keyboard. Write a program to obtain the prime factor of this number.
Modify the function suitably to obtain prime factor recursively */

#include <stdio.h>
void prime_factor(int x, int i);
int main(void)
{
	int number, i = 2;
	
	printf("enter the number:");
	scanf("%d",&number);
	

	prime_factor(number, i);
	printf("\n");
}

void prime_factor(int x, int i)
{
	int quotient;
	
	
	if(x % i == 0 && x >= i)
	{
		quotient = x / i;
		printf("%d\t", i);
		x = quotient;
		prime_factor(x, i);
		
	}
	else if(x >= i)
	{
		i++;
		prime_factor(x, i);
	}

	
}
