/* 23 Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators
 
*/


#include <stdio.h>

int main(void)
{
	int one, two, three;

	printf("enter three numbers:");
	scanf("%d%d%d", &one, &two, &three);
	printf("gretest no is:");
	((one > two && one > three) ? printf("%d\n", one) : ((two > one && two > three) ? printf("%d\n", two):printf("%d\n", three)));
}
