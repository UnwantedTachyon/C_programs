#include <stdio.h>

int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if(number < 2)
    return 0;

    else
    {
        for(int i=2; i<number; i++)
        {
            if(number%i == 0)
            printf("not a prime");
            return 0;
        }
    }
    printf("prime number");
    return 0;
}
