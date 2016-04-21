/* 4 Write a program to print all the ASCII values and their equivalent characters using while loop. The ASCII value varies from 0 to 255
*/

#include <stdio.h>

int main(void)
{

	int ascii = 255;
	while(ascii >= 0)
	{
		printf("%d	%c\n",ascii, ascii);
		ascii--;
	}

}

