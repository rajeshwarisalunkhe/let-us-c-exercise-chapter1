/* Write a program which to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the number of subjects he has failed in.
use the following logic:

1) If the student gets first class and the number of subjects he failed is greater than 3,
then he does not get any grace. if the number of subject he failed in is less than or euqal
to 3, then the grace is of 5 marks per subject

2) If the student gets second class and the number of subjects he failed in is greater than 2, then 
he does not get any grace. If the number of subjects he failed in is less than or equal to 2
then the grace is of 4 marks per subject

3) If the student gets third class and the number of subjects he failed in is greater than 1,
then he does not get any grace, if the number of subjects he failed in is equal to 1
then the grace is of 5 marks per subject. */ 

#include <stdio.h>

int main(void)
{
	int class, fail;
	printf("enter the class obtained and number of subject you failed in:");
	scanf("%d%d", &class, &fail);

	
	switch(class)
	{
		case 1:
		if(fail > 3)
		{
			printf("you will not get any grace\n");
		}
		else if (fail <= 3)
		{
			printf("you will get grace of 5 marks in each subject\n");
		}
		break;

		case 2:
		if(fail > 2)
		{
			printf("you will not get any grace\n");
		}
		else if (fail <= 2)
		{
			printf("you will get grace of 4 marks in each subject\n");
		}
		break;

		case 3:
		if(fail > 1)
		{
			printf("you will not get any grace\n");
		}
		else if (fail ==  1)
		{
			printf("you will get grace of 5 marks in each subject\n");
		}
		break;
	}

} 
