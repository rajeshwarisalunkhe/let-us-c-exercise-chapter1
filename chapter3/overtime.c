/* 1) Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of rs 12 per hour for every hour worked above 40 hours. Assume that employee do not work for fractional part of an hour*/

#include <stdio.h>

int main(void)
{
	int hour, overtime_paid = 0;	
	printf("enter the work hour:");
	scanf("%d", &hour);
	
	while (hour > 40)
	{
		overtime_paid = overtime_paid + 12;
		hour--;
	}
	
	printf("total overtime paid to worker is %d\n", overtime_paid);
}
