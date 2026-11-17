#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];

    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    
    if (strlen(sentence) > 20)
    {
        for (int i = 0; i < 20; i++)
        {
            printf("%c", sentence[i]);
        }
        printf("...");
    } else
    {
        printf("%s\n", sentence);
    }
    
    return 0;
}