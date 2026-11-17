#include <stdio.h>
#include <string.h>

int main()
{
    char firstname[100], lastname[100], fullname[200];
    int length;

    printf("Nama Depan : ");
    fgets(firstname, sizeof(firstname), stdin);
    firstname[strcspn(firstname, "\n")] = '\0';

    printf("Nama Belakang : ");
    fgets(lastname, sizeof(lastname), stdin);
    lastname[strcspn(lastname, "\n")] = '\0';

    strcpy(fullname, firstname);
    strcat(fullname, " ");
    strcat(fullname, lastname);

    length = 0;

    for (int i = 0; firstname[i] != '\0'; i++)
    {
        if (firstname[i] != ' ')
        {
            length++;
        }
    }

    for (int i = 0; lastname[i] != '\0'; i++)
    {
        if (lastname[i] != ' ')
        {
            length++;
        }
    }

    printf("Nama Lengkap : %s\n", fullname);
    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}