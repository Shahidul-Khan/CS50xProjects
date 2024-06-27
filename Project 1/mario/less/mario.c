#include <cs50.h>
#include <stdio.h>
int main(void)
{

    // get  a valid user input

    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // make a right aligned piramid of hashes

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
