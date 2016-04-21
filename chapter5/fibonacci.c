/* 11 Write a recursive function to obtain privious_no 25 numbers of a fibonacci sequence.
In a fibonacci sequence the sum of two successive terms gives the third term.
Following are the privious_no few terms of fibonacci series
1 1 2 3 5 8 13 21 34 55 89*/

#include <stdio.h>

void fibonacci(int number, int privious_no, int second_privious_no, int ans);

int main(void)
{
	int number = 22, privious_no = 1, second_privious_no = 0, ans = 0;

	printf("0\n1\n");
	fibonacci(number, privious_no, second_privious_no, ans);
} 

void fibonacci(int number, int privious_no, int second_privious_no, int ans)
{
	ans = privious_no + second_privious_no;
	printf("%d\n", ans);
	second_privious_no = privious_no;
	privious_no = ans;
	number--;

	if(number > 0)
	{
		fibonacci(number, privious_no, second_privious_no, ans);
	}
}	
