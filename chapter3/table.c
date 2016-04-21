/* 17 Write a program to print the multiplication table of the number entered by the user.
The table should get displayed in the following form

29 * 1 = 29
29 * 2 = 58
...
*/

#include <stdio.h>

int main(void)
{
	int i, number;
	printf("enter a number of which table is required:");
	scanf("%d", &number);

	for(i = 1;i <= 10;i++)
	{
		printf("%d * %d = %d\n", number, i, number * i);
	}
}
