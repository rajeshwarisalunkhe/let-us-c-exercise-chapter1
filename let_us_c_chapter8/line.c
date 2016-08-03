/* 22 For the following set of point given by (x, y) fit a straight line
given by
y = a + bx
where,

a = y − b x
b = (n ∑ yx − ∑ x ∑ y) / [ n ∑ (x * x)  − ( ∑ x  * ∑ x)]


x        y
3.0	1.5
4.5	2.0	
5.5	3.5
6.5	5.0
7.5	6.0	
8.5	7.5
8.0	9.0
9.0	10.5
9.5	12.0
10.0	14.0 */

#include <stdio.h>
#include <math.h>
int main(void)
{
	float array[10][2] = {
				{3.0,	1.5},
				{4.5,	2.0},
				{5.5,	3.5},
				{6.5,	5.0},
				{7.5,	6.0},
				{8.5,	7.5},
				{8.0,	9.0},
				{9.0,	10.5},
				{9.5,	12.0},
				{10.0,	14.0}
			     }, sum_x = 0, sum_y = 0, sum_of_square_of_x = 0, sum_xy = 0, ans, n = 10;
	int i;

	for(i = 0;i < 10;i++)
	{
		sum_x = sum_x + array[i][0]; 
		sum_of_square_of_x = sum_of_square_of_x + (array[i][0] * array[i][0]);
		sum_xy = sum_xy + (array[i][0] + array[i][1]);
		sum_y = sum_y + array[i][1];
	}
	

	ans = ((n * sum_xy) - (sum_x * sum_y)) / ((n * sum_of_square_of_x) - (sum_x * sum_x));

	printf("b is %f\n", ans);

	printf("constant 'a' for each pair can be given as:");

	for(i = 0;i < 10;i++)
	{
		printf("a is %f\n", (array[i][1]) - (array[i][0] * ans));
 	}

}






	
