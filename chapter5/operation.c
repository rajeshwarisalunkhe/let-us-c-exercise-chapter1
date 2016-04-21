/* 7 Write a function that receives 20 integers and returns the sum, average and standard deviation of these numbers .
call this function from main() and print the result from main() */

#include <stdio.h>
{
	int add;
	float avg, std_dev;

	operation(add, avg, std_dev);
}

void operation (int add, float avg, float std_dev)
{
	int number = 20, add = 0, x;
	while(number > 0)
	{
		printf("enter a number:");
		scanf("%d", &x);

		add = add + x;
		number --;
	}

	avg = add / 20;
	number = 20
	while(number > 0)
	{
		power((avg - a), 2);
	}

	 

}

int power(float x, int y)
{
	int i;
	float ans = 1;
	for(i = 0;i < y;i++)
	{
		ans = ans * x;
	}
	
	return ans;
}
float variance;
	

	avg = (a + b + c + d + e) / 5;
	
	p = power((avg - a), 2);
	q = power((avg - b), 2);
	r = power((avg - c), 2);
	s = power((avg - d), 2);
	t = power((avg - e), 2);    

	variance = (p + q + r + s + t) / 5; 

