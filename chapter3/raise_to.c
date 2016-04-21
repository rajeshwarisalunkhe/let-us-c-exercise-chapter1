/* 3 Two numbers are entered through the keyboard. Write a program to find the value of one number raise to the power of other
*/

#include <stdio.h>

int main(void)
{
	int number, power, ans = 1;

	printf("enter number and power:");
	scanf("%d%d", &number, &power);

	while(power > 0)
	{
		ans = ans * number;
		power--;
	}
	
	printf("ans is %d\n", ans);

}
