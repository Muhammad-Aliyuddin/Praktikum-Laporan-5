#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sentence[200];
    int vokal = 0, konsonan = 0;

    printf("Kalimat : ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i < strlen(sentence); i++)
    {
        char letter = tolower(sentence[i]);

        if (letter == 'a' || letter == 'i' || letter == 'u' ||
            letter == 'e' || letter == 'o')
        {
            vokal++;
        }
        else if (letter >= 'a' && letter <= 'z')
        {
            konsonan++;
        }
    }

    printf("Jumlah Vokal : %d\n", vokal);
    printf("Jumlah Konsonan : %d\n", konsonan);

    return 0;
}