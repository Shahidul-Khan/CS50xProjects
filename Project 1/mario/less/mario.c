#include <cs50.h>
#include <stdio.h>
int main(void)
{

    // get  a valid user input

    int n;
    do
    /* this turns the while loop into a do while loop
    meaning it runs the code inside {...} then starts the while loop */
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    /* this is a while loop that that keeps executing whatever's inside {...}
    as long as the condition inside (...) is met */

    // make a right aligned piramid of hashes

    // a nested for loop(a for loop inside a for loop) is necessary.

    for (int i = 1; i <= n; i++)
    /* this is the first for loop that prints characters equal to the height number in a row
    If we go the int i = 0 route the conditions become complicated. So, we start with int i = 1*/
    {
        for (int j = 0; j < n - i; j++)
        /*We are printing characters in a square shape.
        So, we need to fill the rest of the character slots with white spaces
        the number of white spaces will be the height number minus the row number
        So, we run this loop equal to that number. Starting at zero until j < n - i*/
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        /*we need to print hashes equal to the row number.
        So, we start at zero and print hashes as long as k < i
        (we started i at 1 so it'll print a hash on the first line, 2 one the second when i will be
        2)*/
        {
            printf("#");
        }
        printf("\n");
        // We print a new line to ge to the next row
    }
}
