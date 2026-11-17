#include <stdio.h>

int main()
{
    int n1, n2;
    int rows1[100], rows2[100];

    scanf("%d %d", &n1, &n2);

    if (n1 != n2)
    {
        printf("Jumlah tidak sama\n");

        return 0;
    }

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &rows1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &rows2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", rows1[i] * rows2[i]);
    }
    printf("\n");

    return 0;

}