#include <stdio.h>

int main(void)
{
	char array[10];
	int choice, size = 0, i;
	
	printf("enter size:");
	scanf("%d", &size);
	for(i = 0;i < size;i++)
	{
		scanf(" %c",&array[i]);
		printf(" i is %d\n", i);
	}

	for(i = 0;i < size;i++)
	{
		printf("%c", array[i]);
	}
}
