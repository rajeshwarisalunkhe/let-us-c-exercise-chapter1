// 14 Any character is entered through the keyboard, write a program to determine wheather the character entered is capital letter, a small letter, a digit or a special symbol

#include <stdio.h>
int main(void)
{
	char character;
	printf("enter any character:");
	scanf("%c",&character);

	if('A' <= character && 'Z' >= character)
	{
		printf("you entered capital letter\n");
	}
	else if('a' <= character && 'z' >= character)
	{
		printf("you entered small letter\n");
	}
	else if(48 <= character && 57 >= character)
	{
		printf("you entered a digit\n");
	}
	else if((0 <= character <= 47) || (58 <= character <= 64) || (91 <= character <= 96) || (123 <= character <= 127))
	{
		printf("you entered a special symbol\n");
	}
}
