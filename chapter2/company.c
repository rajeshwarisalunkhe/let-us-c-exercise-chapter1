// 19 In a company worker efficiency is determined on the basis of the required for a worker to complete the perticuler job. If the time taken by the worker to complete the perticular job. If the time taken by the worker is between 2 - 3 hours then the worker is said to e highly efficient. if the time required by the worker is between 3 - 4 hours, then theworker is ordered to improve speed. if the time taken is between 4 - 5 hours, theworker is given training to improve his speed, if the time taken by the worker is more than 5 hours, then the worker has to leave the company. if the time taken by the worker is input through the keyboard, Write a program to find efficiency of the worker.

#include <stdio.h>

int main(void)
{
	int time;
	printf("enter the time taken by the worker:");
	scanf("%d", &time);

	if(2 <= time && time <= 3)
	{
		printf("worker is highly proficient\n");
	}
	else if(3 <= time && time <= 4)
	{
		printf("worker need to improve speed\n");
	}
	else if(4 <= time && time <= 5)
	{
		printf("training will be given to the worker\n");
	}
	if(5 < time)
	{
		printf("worker need to leave the company\n");
	}
}
