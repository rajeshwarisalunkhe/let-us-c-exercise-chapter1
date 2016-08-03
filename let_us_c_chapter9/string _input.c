/* while entering string through scanf doesn't allow whitespace/blank in between so it is impossible to enter a words with spaces 
in one string. In order to save words with spaces in one strin followin method can be used */

#include <stdio.h>

int main(void)
{
	char name[100];
	printf("enter your full name:");
	scanf("%[^\n]", name);

	printf("hello %s", name);
}
