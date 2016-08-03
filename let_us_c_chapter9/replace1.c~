/* 6 Write a program that uses an array of pointersto string[]
Receive two strings str1 and str2 and check if str1 is embeded in any of the strings in str[]
if str1[] is found then replace it with str2

char *str[] = {
			"we will teach you how to....",
			"Move a mountain",
			"Level a building",
			"Erase the past",
			"Make a million",
			"....all through c!"
	      };

for example if str1 contains "mountain" and str2 contains "car" then the second string in str should get changed to "Move a car"
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str[] = {
			"we will teach you how to....",
			"Move a mountain",
			"Level a building",
			"Erase the past",
			"Make a million",
			"....all through c!"
	      };

	char str1[10], str2[10];
	int i, j, k,a, counter = 0;

	printf("enter the string to be found and the string to replace with:");
	scanf("%s%s", str1, str2);

	for(i = 0;str[i] != '\0' ;i++)
	{
			counter++;
			a = strcmp(str[i],str1);
			printf("a is %d and counter is %d\n", a, counter);
			if(a == 0)
			{
				//printf("%s", str[i]);
				printf("a is 0");
				//strcpy(&str[i], str2);
			}
		
	}
	
	for(i = 0;i < 6;i++)
	{	
		printf("%s", str[i]);
		printf("\n");
	}
}	
