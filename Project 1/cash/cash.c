#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // take a valid input
    int change;
    int coins = 0;
    do
    {
        change = get_int("Cash owed: ");
    }
    while (change < 0);
    // return the least number of coins
    while (change >= 25)
    {
        change = change - 25;
        coins++;
    }
    while (change >= 10)
    {
        change = change - 10;
        coins++;
    }
    while (change >= 5)
    {
        change = change - 5;
        coins++;
    }
    while (change >= 1)
    {
        change = change - 1;
        coins++;
    }
    printf("Change owed: %i \n", coins);
}
