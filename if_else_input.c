#include <stdio.h>

int main()
{
    char sign;
    scanf("%c", &sign);
    if(sign == 'f' || sign == 'F')
    {
        printf("Doesn't matter");
    }
    else
    {
        printf("Really doesn't matter");
    }
    return 0;
}
