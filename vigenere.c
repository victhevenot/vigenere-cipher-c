#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, string argv[])
{
  string key = argv[1];
  printf("Enter a sentence to encrypt!!\n");
  string words = GetString();
  int key_length = strlen(key);
  int words_length = strlen(words);
  for (int i = 0, k = 0,  n = strlen(words); i < n; i++)
  { 
    int m = k % strlen(key);
    int new_key = key[m] - 97;
    // special characters
    if (words[i] >= 32 && words[i] <= 64)
    {
      printf("%c", words[i]);
    }
    //uppercase
    else if (words[i] >= 65 && words[i] <= 90)
    {
      if (words[i] + new_key > 90)
      {
        printf("%c", words[i] + new_key - 26);
        k++;
      }
      else 
      {
        printf("%c", words[i] + new_key);

        k++;
      }
    }
    //lowercase
    else
    {
      if (words[i] + new_key > 122)
      {
        printf("%c", words[i] + new_key - 26);
        k++;
      }
      else
      {
        printf("%c", words[i] + new_key);
        k++;
      }
    }
  } // ends for
}//ends int main