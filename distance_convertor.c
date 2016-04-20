// 2) The distance between two cities is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.


#include <stdio.h>

int main(void)
{
	int km, m, cm, feet, inches;

	printf("enter distance in kilometer:");
	scanf("%d", &km);

	m = 1000 * km;
	cm = 100000 * km;
	feet = cm / 30;
	inches = cm / 2.54;

	printf("in meter %d\nin cm %d\nin feet %d\nin inches %d\n", m, cm, feet, inches);
}
