// problem 1
// Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.


#include <stdio.h>

int main(void)
{
	int basic_salary, dearness, house_rent, gross_salary;
	printf("enter basic salary:");
	scanf("%d", &basic_salary);

	dearness = (basic_salary * 40) / 100;
	house_rent = (basic_salary * 20) / 100;
	gross_salary = dearness + house_rent + basic_salary;

	printf("gross salary is %d\n", gross_salary);
	
}
