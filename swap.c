// 6)Two numbers are input through the keyboard into two locations c and d write a program to interchange the context of c and d

#include <stdio.h>

int main(void)
{
	int temp, c, d;
	printf("enter two numbers:");
	scanf("%d%d", &c, &d);
	printf("c is %d and d is %d\n", c, d);

	temp = c;
	c = d;
	d = temp;
	printf("after swapping......\n");
	printf("c is %d and d is %d\n", c, d);

}
