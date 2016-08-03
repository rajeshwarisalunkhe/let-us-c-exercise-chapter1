/* Write a program that takes a set of names of individuals and abbreviates the first, middle and other names except 
the last name by their first letter */


/* Write a program that will read a line and delete from it all occurrences of 'the'*/


#include <stdio.h>

int main(void)
{
    char sentence[100];
    int i = 0,j, counter = 0;

    printf("enter the names:");
    scanf("%[^\n]", sentence);
    
   while(sentence[i] != '\0')
    {
       
        /*if(sentence[i] == ' ')
        {
           
                sentence[i - counter] = sentence[i + 1];
            
           //sentence[i] = '\0';
            i = 0;
            counter = 0;
        }
        else
        {
            i++;
        }*/
            i++;
        counter++;
    }


    for(j = 0; j < i;j++)
    {
        printf("%c", sentence[j]);
    }
    printf("\n");
}

