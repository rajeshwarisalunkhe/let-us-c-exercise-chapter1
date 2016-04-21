/* 17 Given three variables x, y, z Write a function to circularly shift their values to right.
in other words if x = 5, y = 8, z = 10 after circular shift y = 5, z = 8, x = 10
call thefunction with variables a, b, c to circularly shift values */

#include <stdio.h>
void shift(int *x, int *y, int *z);
int main(void)
{
	int x, y, z;

	printf("enter three numbers:");
	scanf("%d%d%d", &x, &y, &z);

	printf("x is %d, y is %d and z is %d\n", x, y, z);
	shift(&x, &y, &z);

	printf("after shifting x is %d, y is %d, z is %d\n", x, y, z);

}

void shift(int *x, int *y, int *z)
{
	int temp;

	temp = *z;
	*z = *y;
	*y = *x;
	*x = temp; 

}
