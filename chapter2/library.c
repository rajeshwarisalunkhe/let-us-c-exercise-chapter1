// 16 A library charges fine for every book returned late. for first five days fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine and appropriate massage.

#include <stdio.h>

int main(void)
{
	int no_of_days, fine;
	printf("enter how many days the member is late to return the book:");
	scanf("%d", &no_of_days);

	if(no_of_days <= 5)
	{
		printf("fine is 50 paise\n");
	}
	else if(6 <= no_of_days && no_of_days <= 10)
	{
		printf("fine is one rupee\n");
	}
	else if (no_of_days > 10 && no_of_days <= 30)
	{
		printf("fine is five rupees\n");
	}
	else if (no_of_days > 30)
	{
		printf("Your membership is canceled\n");
	}
}
