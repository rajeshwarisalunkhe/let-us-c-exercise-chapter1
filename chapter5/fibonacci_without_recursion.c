/* 
fibonacci without recurssion*/

#include <stdio.h>

void fibonacci(int number);

int main(void)
{
	int number;
	printf("how many numbers to print:");
	scanf("%d", &number);

	fibonacci(number);
	
} 

void fibonacci(int number)
{
	int privious_no = 1, second_privious_no = 0, ans = 0;

	if(number == 1)
	{
		printf("0\n");
	}
	else if(number > 1)
	{
		printf("0\n1\n");
		while(number - 2 > 0)
		{
			ans = privious_no + second_privious_no;
			printf("%d\n", ans);
			second_privious_no = privious_no;
			privious_no = ans;
			number--;
		}
	}
}	
