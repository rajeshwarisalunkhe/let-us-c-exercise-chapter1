/* 11 Write a program which performs following tasks
- Initialize an integer array of 10 elements in main()
- pass the entire array to function modify()
- in modify multiply each element of array by 3
- return the control to main() and print the new array elements in main() */

#include <stdio.h>
void modify(int n[], int m[], int size);
int main(void)
{
	int i, number[10], modi[10];

	for(i = 0;i < 10;i++)
	{
		printf("enter the number:");
		scanf("%d", &number[i]);
	}

	modify(number, modi, 10);
	
	for(i = 0;i < 10;i++)
	{
		printf("%d\t", modi[i]);
		
	}
	
	printf("\n");
	
}

void modify(int n[], int m[], int size)
{
	int i;

	for(i = 0;i < size;i++)
	{
		m[i] = n[i] * 3;  
	}

}
