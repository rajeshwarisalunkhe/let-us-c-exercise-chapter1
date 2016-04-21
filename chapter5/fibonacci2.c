/* 
fibonacci without recurssion*/

#include <stdio.h>

void fibonacci(int number, int privious_no, int second_privious_no, int ans);

int main(void)
{
	int number = 23, privious_no = 1, second_privious_no = 0, ans = 0;

	printf("0\n1\n");
	fibonacci(number, privious_no, second_privious_no, ans);
} 

void fibonacci(int number, int privious_no, int second_privious_no, int ans)
{
	while(number > 0)
	{
		ans = privious_no + second_privious_no;
		printf("%d\n", ans);
		second_privious_no = privious_no;
		privious_no = ans;
		number--;
	}
}	
