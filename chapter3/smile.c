/* 11 Write a program to fill entire screen by smiling face
The smilling face has an ascii value 1
*/

#include <stdio.h>

int main(void)
{
	int i, ascii1 = 58,  ascii2 = 41;	
	for(i = 0; i < 1000;i++)
	{
		printf("%c%c\t",ascii1, ascii2);
	}
}

