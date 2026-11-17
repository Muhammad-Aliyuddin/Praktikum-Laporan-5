#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100], checking[100];
    int length, same = 1;

    scanf("%s", word);

    strcpy(checking, word);

    length = strlen(checking);

    for (int i = 0; i < length; i++)
    {
        checking[i] = tolower(checking[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if (checking[i] != checking[length - 1 - i])
        {
            same = 0;
            break;
        }
    }
    if (same == 1)
    {
        printf("Kata '%s' adalah palindrom\n", word);
    }
    else 
    {
        printf("Kata '%s' bukan palindrom\n", word);
    }

    return 0;
}