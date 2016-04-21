/* 4 Any year is entered through the keyboard.Write a function to determine whether the year is leap year or not */

#include <stdio.h>
int isleapyear(int x);
int main(void)
{
	int year, ans;
	printf("enter the year:");
	scanf("%d", &year);

	ans = isleapyear(year);

	if(ans == 1)
	{
		printf("it is a leap year\n");
	}
	else 
	{
		printf("it is not a leap year\n");
	}

} 

int isleapyear(int x)
{
	int flag = 0;
	
	if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
	{
		flag = 1;
	}

	return flag;
}
