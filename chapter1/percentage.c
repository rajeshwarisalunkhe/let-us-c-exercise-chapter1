// 10)In a town of men is 52%, the total litaracy is 48%. If total literate men is 35% of total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000.

#include <stdio.h>

int main(void)
{
	int no_of_men, no_of_women, lit_men, lit_women, illit_men, illit_women;
	no_of_men = 80000 * 52 / 100;
	no_of_women = 80000 * 48 / 100;
	
	lit_men = 80000 * 35 / 100;
	illit_men = no_of_men - lit_men;
	lit_women = (48 - 35) * 80000 / 100;
	illit_women = no_of_women - lit_women; 
	printf("no of illit_women is %d and no of illit_men is %d\n", illit_women, illit_men);
}  
