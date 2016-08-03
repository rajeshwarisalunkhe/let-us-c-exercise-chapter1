/* 24 A dequeue is an order set of elements in which elements may be inserted or retrieved from either end. Using an array stimulate a dequeue of characters and operations retrieve left, retrieve right, insert right, insert left.
Exceptional conditions such as dequeue is full or empty should be indicated.
*/

#include <stdio.h>
int add_left(char *array, int size);
int add_right(char *array, int size);
int retrieve_left(char *array, int size);
int add_right(char *array, int size);
int main(void)
{
	char array[10];
	int choice, size, i;
	
	printf("enter size:");
	scanf("%d", &size);
	for(i = 0;i < size;i++)
	{
		scanf(" %c", &array[i]);
	}
	do
	{
		printf("press 1 to add left\n");
		printf("press 2 to add right\n");
		printf("press 3 to retrieve left\n");
		printf("press 4 to retrieve right\n");
		printf("press 5 to exit\n");
		printf("enter your choice:");
		scanf("%d", &choice);
	
	
		switch(choice)
		{
			case 1:
			size = add_left(array, size);
			break;

			case 2:
			size = add_right(array, size);
			break;

			case 3:
			size = retrieve_left(array, size);
			break;

			case 4:
			retrieve_right(array, size);
			break;

			case 5:
			printf("Exiting...\n");
			return 0;
		}

	}while(choice != 5);
	
}



int add_left(char *array, int size)
{
	char character;
	int i;
	if(size == 10)
	{
		printf("dequeue is full can't add\n");
	}
	else
	{
		printf("enter the character you want to insert:");
		scanf(" %c", &character);
		for(i = size;i > 0;i--)
		{
			array[i] = array[i - 1];
		}

		array[0] = character;
		size = size + 1;
		for(i = 0;i < size;i++)
		{
			printf("%c", array[i]);
		}
		printf("\n");
	}

	return size;
}

int retrieve_left(char *array, int size)
{
	char character;
	int i;
	if(size == 0)
	{
		printf("dequeue is empty\n");
	}
	else
	{
		for(i = 0;i < size;i++)
		{
			array[i] = array[i + 1];
		}

		size = size - 1;
		for(i = 0;i < size;i++)
		{
			printf("%c", array[i]);
		}
		printf("\n");
	}

	return size;
}

int add_right(char *array, int size)
{
	char character;
	int i;
	if(size == 10)
	{
		printf("dequeue is full can't add\n");
	}
	else
	{
		printf("enter the character you want to insert:");
		scanf(" %c", &character);
		array[size] = character;
		size = size + 1;
		for(i = 0;i < size;i++)
		{
			printf("%c", array[i]);
		}
		printf("\n");
	}

	return size;
}

int retrieve_right (char *array, int size)
{
	char character;
	int i;
	if(size == 0)
	{
		printf("dequeue is empty\n");
	}
	else
	{
		size = size - 1;
		for(i = 0;i < size;i++)
		{
			printf("%c", array[i]);
		}
		printf("\n");
	}

	return size;
}
