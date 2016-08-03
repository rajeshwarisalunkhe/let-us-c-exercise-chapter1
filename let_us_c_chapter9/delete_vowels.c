/* Write a program to delete all vowels from sentence.Assume that the sentence is not more than 80 characters long*/

#include <stdio.h>
#include <string.h>

int is_vowel(char letter)
{
    return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
}

int main(void)
{
    char array[80];
    int i, p, j;

    printf("Enter something:");
    scanf("%s", array);
    p = strlen(array);

    for(i = 0 ; array[i] != '\0' ; )
    {
        if(is_vowel(array[i]))
        {
            for (j = i;array[j] != '\0';j++)
            {
                array[j] = array[j + 1];
                
            }
          
        }
        else
        {
            i++;
        }
    }
    array[i] = '\0';
    for(i = 0;array[i] != '\0';i++)
    {
        printf("%c", array[i]);
    }
    
    printf("\n");

}