#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

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
    string key = argv[1];

    /* Check to see if key is made only of alphabetical characters */
    for(int k = 0; k < strlen(key) - 1; k++)
    {
        if( isalpha(key[k]) == false )
        {
          printf("Only alphabetical characters! \n");
          return 1;
        }
        else
        {}
    }

    /* printf("gimme a phrase: "); */

    string phrase = GetString();
    int phrase_length = strlen(phrase);
    int key_length = strlen(key);

    for(int i = 0, j = 0; i < phrase_length; i++)
    {
        /* Uppercase letters rotate amongst uppercase letters */
        if(phrase[i] > 64 && phrase[i] < 91)
        {
        phrase[i] = 65 + (((phrase[i] - 65) + (tolower(key[j % key_length]) - 97)) % 26);
        printf("%c", phrase[i]);
        j = j + 1;
        }
        /* Lowercase letters rotate amongst lowercase letters */
        else if(phrase[i] > 96 && phrase[i] < 123)
        {
        phrase[i] = 97 + (((phrase[i] - 97) + (tolower(key[j % key_length]) - 97)) % 26);
        printf("%c", phrase[i]);
        j = j + 1;
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

