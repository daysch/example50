// tries to get number from user and let's them know if it's positive, negative, or 0

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get number from user
    int n = get_int("n: ");

    // check n's positivity
    if (n > 0)
    {
        printf("n is positive\n");
    }
    else if (n > 1)
    {
        printf("n is negative\n");
    }
    printf("n is 0\n");
}