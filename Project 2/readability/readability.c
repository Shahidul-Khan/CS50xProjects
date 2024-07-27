#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letters(string l);

int words(string w);

int sentences(string s);

int main(void)
{
    // take a string user input

    string t = get_string("Text: ");

    // calculate the number of letters, words and sentences

    long double total_letters = (long double) letters(t);
    long double total_words = (long double) words(t);
    long double total_sentences = (long double) sentences(t);

    /*the results need to be converted here because the computation glitches otherwise*/

    // compute the choleman-leau index

    long double L = (total_letters / total_words) * 100;

    long double S = (total_sentences / total_words) * 100;

    long double grade = (0.0588 * L) - (0.296 * S) - 15.8;

    int G = round(grade);

    // print a grade

    if (G >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (G < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", G);
    }
}

int letters(string l)
{
    int nl = 0;

    for (int i = 0, n = strlen(l); i < n; i++)
    {
        if (isalnum(l[i]))
        {
            nl++;
        }
    }
    return nl;
}

int words(string w)
{
    int nw = 1;

    for (int i = 0, n = strlen(w); i < n; i++)
    {
        if (isspace(w[i]))
        {
            nw++;
        }
    }
    return nw;
}

int sentences(string s)
{
    int ns = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        //basically issentence
        {
            ns++;
        }
    }
    return ns;
}
