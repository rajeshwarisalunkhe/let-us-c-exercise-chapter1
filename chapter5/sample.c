#include <stdio.h>

int add(int num, int y)
{
	num = 6;
}

int main(void)
{
	int num = 5, x, y = 10;
	x = add( y, num);
	printf("%d\n", x);

}


