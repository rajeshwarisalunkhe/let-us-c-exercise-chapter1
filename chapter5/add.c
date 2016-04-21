/* 14 Write a recursive function to obtain the running sum of first 25 natural numbers*/

#include <stdio.h>
int add(int number);
int main(void)
{
	int number, ans;
	printf("enter number upto which sum is required:");
	scanf("%d", &number);

	ans = add(number);

	printf("ans is %d\n", ans);
} 

int add(int number)
{
	if(number > 0)
		return number + add(number - 1);

}
