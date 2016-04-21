// 3)if the marks obtained by a student in five different subjects are input through the keyboard,write a program to find out the percentage marks obtained by the student. Assume that the maximum marks that can be obtained by student in each subject is 100.

#include <stdio.h>

int main(void)
{
	int sub1, sub2, sub3, sub4, sub5;
	float percentage, total;

	printf("enter marks in subjects:");
	scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
	
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = (total/500) * 100;
	printf("percentage are %f\n", percentage);
	
}
