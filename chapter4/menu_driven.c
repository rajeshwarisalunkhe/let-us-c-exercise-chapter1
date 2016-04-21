/* 1) Write a menu driven program which has following options

1) Factorial of a number
2) Prime or not
3) odd or even
4) Exit

Once a menu item is selected the appropriate action should be taken and once this action is finished
the menu should reappear 
Unless the user select exit option program should continue to work
Hint : Make useof infinite while loop and switch statement
*/

#include <stdio.h>
long long factorial(int x);
int even_odd(int x);
int prime(int x);
int main(void)
{

	int number, operation, test, flag;
	long long fact;


	printf("enter the number:");
	scanf("%d", &number);

	do
	{
		
		printf("enter the operation number\n");
		printf("enter 1 for factorial of a number\n");
		printf("enter 2 to check whether the number is prime or not\n");
		printf("enter 3 to check whether the number is even oor odd\n");
		printf("enter 4 for exit\n");
		scanf("%d", &operation);

		switch(operation)
		{
			case 1:
			fact = factorial(number);
			printf("factorial of %d is %lld\n", number, fact);
			break;
			
			case 2:
			flag = prime(number);
			if(flag == 1)
			{
				printf("not a prime number\n");
			}
			else
			{
				printf("prime number\n");
			}
			break;

			case 3:
			test = even_odd(number);
			if(test == 0)
			{
				printf("number is even\n");
			}
			else
			{
				printf("no is odd\n");
			}
			break;

			case 4:
			printf("exiting\n");
			return 0;
		}
	}while(operation != 4);


} 

long long factorial(int x)
{
	int i; 
	long long factorial = 1;

	for(i = 1;i <= x;i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;

}

int even_odd(int x)
{
	int y;
	if(x % 2 == 0)
	{
		y = 0;
	}
	else
	{
		y = 1;
	}
	return y;
}

int prime(int x)
{
	int flag = 1, i;
	for(i = 2;i < x;i++)
	{
		if(x % i == 0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	return flag;

}
