/* 7 Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and zeros entered
*/

#include <stdio.h>

int main(void)
{

	int number, zeros = 0,positive = 0, negative = 0;
	char character; 

	do
	{
		printf("enter a number:");
		scanf("%d", &number);

		if (number == 0)
		{
			zeros++;	
		}
		else if (number > 0)
		{
			positive++;
		}
		else if (number < 0)
		{
			negative++;
		}
		
		printf("do you want to enter another number y / n:");
		scanf(" %c",&character); 
		/*The difference between scanf("%c", &c1) and scanf(" %c", &c2) 
		is that the format without the blank reads the next character,
		even if it is white space, whereas the one with the blank skips white space (including newlines)
		and reads the next character that is not white space.
		In a scanf() format, a blank, tab or newline means 'skip white space if there is any to skip'. 
		It does not directly 'clear the input buffer',
		but it does eat any white space which looks similar to clearing the input buffer
		(but is quite distinct from that).*/
		
		
	}while(character == 'y');
	printf("no of zero is %d, positive number is %d and negative number is %d\n", zeros, positive, negative);
}
