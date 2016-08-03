/* Write a program that will read a line and delete from it all occurences of the word 'the' */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *sentence;
	int i = 0, j, size;
	
	do
	{
		printf("enter size of character array:");
		scanf("%d", &size);
		if(size == 0)
		{
			printf("size can not be zero... Please enter again\n");
		}
		
	}while(size == 0);
	
	sentence = malloc(size * sizeof(char));
	printf("enter the character:");
	for(j = 0;j < size;j++)
	{
		scanf(" %c", &sentence[j]);
	}

	while(sentence[i] != '\0')
	{
		if(sentence[i] == 't' && sentence[i + 1] == 'h' && sentence[i + 2] == 'e')
		{
			for(;sentence[i + 3] != '\0';i++)
			{
				sentence[i] = sentence[i + 3];
			}
			sentence[i] = '\0';
			i = 0;
		}
		else
		{
			i++;
		}
	}
	
	
	for(j = 0;sentence[j] != '\0';j++)
	{
		printf("%c", sentence[j]);
	}

	printf("\n");
}
