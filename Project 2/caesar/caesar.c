#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cypher(char c, int n);

int main(int argc, string argv[])
{
    // get the correct number of keys

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1; //ends the program
    }

    // make sure the key is valid

    int i = 0;
    int p = 0;
    for (int n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i] /*2nd strings i'th character*/ ))
        {
            p++;
        }
    }

    string t;

    if (i == p)
    {
        t = get_string("plaintext:  ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // convert the key to a int

    int k = atoi(argv[1]);

    // cypher the text

    int q = strlen(t);
    char c[q + 1];

    // one extra slot in the array for storing null and ending the string

    for (int j = 0, n = strlen(t); j < n; j++)
    {
        c[j] = cypher(t[j], k);
    }
    c[q] = '\0';

    printf("ciphertext: %s\n", c);

    // Check if every character in the plaintext is a letter and cypher it
}
char cypher(char c, int n)
{
    if (isupper(c))
    {
        // cypher the plaintext character when uppercase
        int A = c - 'A';
        c = ((A + n) % 26) + 'A';
        /* % 26 will not change the number if it is lower than 26
        if the number is higher than 26 this'll change it to (number - 26)
        meaning it's position in the alphabet table*/
    }
    else if (islower(c))
    {
        // cypher the plaintext character when lowercase
        int a = c - 'a';
        c = ((a + n) % 26) + 'a';
    }
    return c;
}
