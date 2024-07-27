#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int calculate_score(string w);

// assign points for each letter

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// declaring an array and assigning values for 26 positions

int main(void)
{
    // promt the users for two words input

    string w1 = get_string("player 1: ");
    string w2 = get_string("player 2: ");

    // compute the score of each word

    int j = calculate_score(w1);
    int k = calculate_score(w2);

    // final massage

    if (j > k)
    {
        printf("Player 1 wins!\n");
    }
    else if (j < k)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}


int calculate_score(string w)

/* declared a function that takes a string input and stores it inside w;
and outputs an integer that has to be stored somewhere*/

{
    int x = 0; //global variable to calculate points and store them

    for (int i = 0, len = strlen(w); i < len; i++)

    /*declared int len and set it equal to the length of the given string
    so that the function strlen doesn't need to be run multiple times*/

    {
        if (isupper(w[i]))
        {
            x += points[w[i] - 'A']; /* we can reduct a char from another char
            and get the int value between them
            in this case that results in,
            the position of that perticular alphabet in the alphabet table*/
        }
        else if (islower(w[i]))
        {
            x += points[w[i] - 'a'];
        }
    }
    return x;
}
