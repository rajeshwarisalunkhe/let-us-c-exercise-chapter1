/* Write a program that will read a line and delete from it all occurrences of 'the'*/


#include <stdio.h>

int main(void)
{
    char sentence[100];
    int i = 0,j;

    printf("enter the sentence:");
    scanf("%[^\n]", sentence);
    
    while(sentence[i] != '\0')
    {
        if(sentence[i] == 't' && sentence[i + 1] == 'h' && sentence[i + 2] == 'e')
        {
            for(;sentence[i + 3] != '\0';i++)
            {
                sentence[i] = sentence[i + 3];
            }
            sentence[i] = '\0';
            i = 0;
        }
        else
        {
            i++;
        }
    }
    

    for(j = 0; j < i;j++)
    {
        printf("%c", sentence[j]);
    }
    printf("\n");
}
