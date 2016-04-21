/*8 Write a function that receives marks received by a student in a three subjects 
and returns the avg and percentage of this marks 
Call this function from main and print the results in main*/



#include <stdio.h>
void marks(float *avg, float *percentage);
int main(void)
{
	float avg, percentage;
	marks(&avg, &percentage);

	printf("average marks are %f\n", avg);
	printf("percentage are %f\n", percentage);

}

void marks(float *avg, float *percentage)
{
	float  add = 0;
	int k, m, sub = 3;
	k = sub;

	while(k > 0)
	{
		printf("enter marks in subject one by one:");
		scanf("%d", &m);
		
		add = add + m;
		k--;
	}

	*avg = add / sub;

	*percentage = (add /(sub * 100)) * 100 ;

}
