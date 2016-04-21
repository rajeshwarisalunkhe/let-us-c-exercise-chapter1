/* 15 Write a program to produce following output

A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                 	A
*/

#include <stdio.h>

int main(void)
{
	int i, j, limit1 = 72,limit2 = 70, k, l;
	for(j = 0;j < 7;j++)
	{	
		for(i = 65; i < limit1;i++)
		{
			printf("%c\t", i);
		}
		for(l = 0;l < j ;l++)
		{		
			printf("\t");
		}
		for(l = 1;l < j ;l++)
		{		
			printf("\t");
		}
		for(k = limit2 ; k > 64;k--)
		{
			printf("%c\t", k);
			
		}
		
		printf("\n");
		limit1--;
		if(j > 0)
		limit2--;
	}

} 
