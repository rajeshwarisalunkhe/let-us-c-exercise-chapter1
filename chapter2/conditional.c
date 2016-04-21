/* 21 using conditional operator
1) Whether the character entered through the keyboard is a lower case alphabet or not
2) Whether a character entered through the keyboard is a special symbol or not
*/

#include <stdio.h>
 
int main(void)
{
	char c;
	printf("enter a character:");
	scanf("%c", &c);

	(97 <= c && c <= 122 ? printf("lower case alphabet\n") : printf("not a lower case alphabet\n"));
	((0 <= c <= 47) || (58 <= c <= 64) || (91 <= c <= 96) || (123 <= c <= 127) ? printf("it is character\n"): printf("not a character\n"));

} 
