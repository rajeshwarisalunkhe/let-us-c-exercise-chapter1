/* 1 Twenty five numbers are entered from the keyboard into an array.
The number to be searched is entered through the keyboard by the user.
Write a program to find if the number to be searched is present in the array
and if it is present, display the numberof times it appears in the array. */

#include <stdio.h>

int main(void)
{
	int i, number[25], num, counter = 0;

	for(i = 0;i < 25;i++)
	{
		printf("enter the number:");
		scanf("%d", &number[i]); 
	}
	
	printf("enter the number to be searched in array:");
	scanf("%d", &num);
	i = 0;
	while(i < 25)
	{
		if(number[i] == num)
		{
			counter++;
		}
		i++;
	}
	
	if(counter > 0)
	{
		printf("no is present in the array %d no of times\n", counter);
	}
	else
	{
		printf("no is not present in the array\n");
	}
}

