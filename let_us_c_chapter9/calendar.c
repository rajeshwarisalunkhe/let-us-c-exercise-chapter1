/* Develop a program that receives the month and year from the
keyboard as integers and prints the calendar in the following
format.
	September 2004
Mon Tue Wed Thu fri sat sun
         1   2   3   4   5
6    7   8   9   10  11  12
13   14  15  16  17  18  19
20   21  22  23  24  25  26
27   28  29  30


Note that according to the Gregorian calendar 01/01/1900 was
Monday. With this as the base the calendar should be
generated.*/


#include <stdio.h>
int isleapyear(int x);
void print_month(int m, int month, int year);
int no_of_days_of_month(int month_no, int year);

int main(void)
{
	int month, year, j = 0, i, k, base = 1900, m = -1, mnth;
	
	printf("enter month and year:");
	scanf("%d%d", &month, &year);

	while(year >= base )
	{
			
		if(isleapyear(base - 1))
		{
			m = m + 2;
			if(m > 6)
			{
				m = m - 7;
			}
		}	
		else
		{
			m++;
			if(m  > 6)
			{
				m = m - 7;
			}
		}
		base++;
	}
	
	printf("mon\ttue\twed\tthu\tfri\tsat\tsun\n");
	printf("\n");
	
	print_month(m, month, year);
	
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


void print_month(int m, int month, int year)
{
	int k, l, i, j = m, days;


	for(k = 1;k <= 12;k++)
	{
		days = no_of_days_of_month(k, year);
		if(month == k)
		{
			for(i = 0;i < j;i++)
			{
				printf("\t");
			}
			for(i = 1;i <= days;i++)
			{
				printf("%d\t", i);
				j++;
				if(j >= 7)
				{
					j = 0;
					printf("\n");
				}
				
			}
			printf("\n");
			break;
		}
		for(l = 0;l < days;l++)
		{
			j++;
			if(j >= 7)
			{
				j = 0;
			}
		}
	}

}


int no_of_days_of_month(int k, int year)
{	int days;

	if(k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12)
	{
		days = 31;
	}
	else if(k == 4 || k == 6 || k == 9 || k == 11)
	{	
		days = 30;
	}
	else if(k == 2)
	{
		if(isleapyear(year))
		{
			days = 29;
		}
		else
		{
			days = 28;
		}
	}
	return days; 
}
