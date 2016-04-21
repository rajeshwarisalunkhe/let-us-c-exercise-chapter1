/* 5 Write a program to print out all Armstrong numbers between 1 and 500. 
If sum of cubes of each digit of the number is equal to the number itself
then the number is called an Armstrong number.
for example 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3) */

#include <stdio.h>

int main(void)
{
	int ans, reminder, number = 1, num;
	
	while(number <= 500)
	{
		num = number;
		ans = 0;		
		while(num > 0)
		{
			reminder = num % 10;
			ans = ans + (reminder * reminder * reminder);
			num = num / 10;
		}
	
		if(number == ans)
		{
			printf("%d\n", ans);
		}
		number++;
	}	
}
