/* Write a program that converts a string like "124" to an integer 124 */

#include <stdio.h>

int main(void)
{
	char str[] = {"2564"};
	int result = 0, i, integer;
	

	for(i = 0;str[i] != '\0';i++)
	{
		integer = str[i] - '0';
	
		result = (result * 10) + integer;
		
	}

	printf("result is %d\n", result);
}
