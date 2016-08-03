#include <stdio.h>
int main(void)
{
    int flag = 0, x = 1904;
    
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        flag = 1;
    }

    printf("%d",flag);
}