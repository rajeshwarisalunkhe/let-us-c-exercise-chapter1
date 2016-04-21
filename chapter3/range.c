/* 9 Write a program to find the range of a set of numbers. 
Range is the difference between the smallest and the biggest number in the list*/


#include <stdio.h>

int main(void)
{
	int num, number, small = 0, big = 0, range;
	printf("enter how many numbers to enter:");
	scanf("%d", &num);
	
	while(num > 0)
	{
		
		printf("enter the number:");
		scanf("%d", &number);
		
		if(number > big)
		{
			big = number;
		}
		if(small == 0)
		{
			small =  number;
			printf("small is %d\n", small);
		}
		else if(number < small)
		{
			small = number;
		}
		
		num--;
		
	}
	range = big - small;
	printf("range is %d small is %d big is %d\n", range, small,big);
	

}
