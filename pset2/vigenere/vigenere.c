#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    string k = argv[1];
    if (argc != 2)
    {
        printf("\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(k); i < n; i++)
        {
            if (! isalpha(k[i]))
            {   printf("\n");
                return 1;
            }
        }
    }
    printf("plaintext:");
    string p = get_string();
    if (p != NULL)
    {
        printf("ciphertext:");
        for (int i = 0, j = 0, n = strlen(p); i < n; i++, j++)
        {
            if (j > strlen(k) - 1)
            {
                j = 0;
            }
                int c = 0;
                if (isupper(p[i]))
                {
                    c = (((p[i] - 65) + (tolower(k[j]) - 97))%26) + 65;
                    printf("%c", (char)c);
                }
                else if (islower(p[i]))
                {
                    c = (((p[i] - 97) + (tolower(k[j]) - 97))%26) + 97;
                    printf("%c", (char)c);
                }
                else
                {
                    printf("%c", p[i]);
                    j--;
                }
            }
        }
        printf("\n");

    return 0;
}