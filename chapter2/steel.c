/* 15 A certain grade of steel is graded according to the following conditions
1) Hardness must be greater than 50
2) Carbon content must be less than 0.7
3) Tensile strength must be greater than 5600

The grade are as follows

Grade is 10 if all three conditions are met
Grade is 9 if conditions 1 and 2 are met
Grade is 8 if conditions 2 and 3 are met
Grade is 7 if conditions 1 and 3 are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration
and output the grade of the steel
*/

#include <stdio.h>

int main(void)
{
	int hardness, tensile_strength;
	float carbon_content
	printf("enter hardness, carbon content and tensile strength of the steel:");
	scanf("%d%f%d", &hardness, &carbon_content, &tensile_strength);

	if(hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
	{
		printf("the grade is 10\n");
	}
	else if(hardness > 50 && carbon_content < 0.7)
	{
		printf("the grade is 9\n");
	}
	else if(carbon_content < 0.7 && tensile_strength > 5600)
	{
		printf("the grade is 8\n");
	}
	else if(hardness > 50 && tensile_strength > 5600)
	{
		printf("the grade is 7\n");
	}
	else if(hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600)// confuse
	{
		printf("the grade is 6\n");
	}
	else if !(hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
	{
		printf("the grade is 5\n");
	}


}
