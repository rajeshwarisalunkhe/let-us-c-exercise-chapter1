// squareroot not complete

#include <stdio.h>

int main(void)
{
	int i, j, quotient, ans = 1, x, number;	
	

	printf("enter the number:");
	scanf("%d", &x);
	number = x;
	for(i = 2;i <= x;)
	{
		j = 0;
		while(x % i == 0)
		{
			
			quotient = x / i;
			x = quotient;
			j++;
			
		}
		
		while(j >= 2)
		{
			ans = ans * i;
			j = j - 2;
		}
		
		i++;	
	}
	printf("number is %d and i is %d", number, i - 1);
	if(x == 1 && number != (i - 1))
	{
		
		printf("ans is %d\n", ans);
	}
	else 
	{
		printf("not a perfect square\n");	
	}
	
}
