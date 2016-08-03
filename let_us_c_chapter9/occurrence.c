/* Write a program to count the number of occurrences of any two vowels insuccession in a line of text.
for example , in the sentence "Please read this application and give me gratuity"
such occurrences are ea, ea, ui*/


#include <stdio.h>
#include <string.h>

int is_vowel(char vowel);
int main(void)
{
    char array[100];
    int counter = 0, i = 0,j;

    printf("enter the sentence:");
    scanf("%[^\n]", array);
    
    while(array[i] != '\0')
    {
        if(is_vowel(array[i]) && is_vowel(array[i + 1]))
        {
            counter++;
            i = i + 2;
        }
        else
        {
            i++;
        }
    }

    printf("counter is %d\n", counter);
}


int is_vowel(char vowel)
{
    return(vowel == 'a' || vowel == 'e'|| vowel == 'i' || vowel == 'o' || vowel == 'u');
}
