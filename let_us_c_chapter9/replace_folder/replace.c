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
	int i, j, k,a, l, m, counter = 0, p;

	


	printf("enter the string to be found and the string to replace with:");
	scanf("%s%s", str1, str2);
	p = strlen(str2);
	//printf("%d", p);

	for(i = 0;i < 6;i++)
	{
		for(j = 0, k = 0;str[i][j] != '\0' && k <= strlen(str1) ;j++)
		{

			if(str1[k] == str[i][j])
			{
				k++;
				printf("%c", str[i][j]);
				if(k == strlen(str1))
				{
					/*for(l = j - k, m = 0;p >= 0;l++, m++)
					{
						str[i][l] = str2[m];
						p--;
					}*/
					printf("in innermost loop %d\n", j - k);
					k = 0;
				}
			
			}
			else
			{
				k = 0;
			}
			
		}
	}
	
	for(i = 0;i < 6;i++)
	{	
		printf("%s", str[i]);
		printf("\n");
	}
}	
