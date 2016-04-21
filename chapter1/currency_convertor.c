//11) A cashier has currency notes of denominations 10, 50 and 100. If th amount to be withdrawn is input through the keyboards in hundreds, write a program to find the total number of currency notes of each denominations the cashier will have to give to the withdrawer. 

#include <stdio.h>

int main(void)
{
	int ten, fifty, number;

	printf("enter no of note of 100:");
	scanf("%d", &number);

	ten = number * 10;
	fifty = number * 2;
	printf("no of notes to be given of 100 are %d\n",number);
	printf("OR\n");
	printf("no of notes to be given of 50 are %d\n",fifty);
	printf("OR\n");
	printf("no of notes to be given of 10 are %d\n",ten);	

}  
