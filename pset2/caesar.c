#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

/*

- User enters a numeric key value as the only argument
- User is prompted for a string
- Based on the key value, each alphabetical character
    in the string is rotated through the alphabet (if it goes beyond z,
    it wraps around to the beginning of the alphabet)
- Capital letters remain capitalized, same for lowercase

*/

int main(int argc, string argv[])
{


    /* Throw an error if # of arguments isn't 1 */
    if(argc != 2)
    {
    printf("Wrong numba of arguments! \n");
    return 1;
    }
    else
    {
    /* printf("gimme a phrase: "); */
    int key = atoi(argv[1]);
    string phrase = GetString();
    int n = strlen(phrase);

    for(int i = 0; i < n; i++)
    {
        /* Uppercase letters rotate amongst uppercase letters */
        if(phrase[i] > 64 && phrase[i] < 91)
        {
        phrase[i] = 65 + (((phrase[i] - 65) + key % 26) % 26) ;
        printf("%c", phrase[i]);
        }
        /* Lowercase letters rotate amongst lowercase letters */
        else if(phrase[i] > 96 && phrase[i] < 123)
        {
        phrase[i] = 97 + (((phrase[i] - 97) + key % 26) % 26) ;
        printf("%c", phrase[i]);
        }
        /* Non-alphabetical characters remain unchanged */
        else
        {
        printf("%c", phrase[i]);
        }
    }

    printf("\n");
    }
}
