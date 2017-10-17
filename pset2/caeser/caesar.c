#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

 int main(int l, string a[])
 {
    if (l != 2)
    {
        printf("\n");
        return 1;
    }

    int k = atoi(a[1]);
    if (k < 0)
    {
        printf("\n");
        return 1;
    }
    else
    {
        printf("plaintext:");
        string c = get_string();
        printf("ciphertext:");
        for (int i = 0, n = strlen(c); i < n; i++)
            {
                if islower(c[i])
                    printf("%c", (((c[i] + k) - 97) % 26) + 97);
                else if isupper(c[i])
                    printf("%c", (((c[i] + k) - 65) % 26) + 65);
                else
                    printf("%c", c[i]);
            }
            printf("\n");
            return 0;
    }
 }