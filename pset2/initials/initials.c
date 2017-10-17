#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (void)
{

    string n=get_string();
    printf("%c",toupper(n[0]));

    for(int i=1;i<strlen(n);i++)
    {
        if(n[i] == ' ')
        {
           printf("%c",toupper(n[i+1]));
           i++;
        }
    }

    printf("\n");
    return 0;
}