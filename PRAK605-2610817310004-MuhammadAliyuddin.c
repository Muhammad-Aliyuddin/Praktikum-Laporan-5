#include <stdio.h>

int main()
{
    int n;
    int matriksA[100][100], matriksB[100][100], result[100][100];
    char name[100];

    scanf("%d", &n);
    getchar();

    fgets(name, sizeof(name), stdin);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriksA[i][j]);
        }
    }
    getchar();
    fgets(name, sizeof(name), stdin);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriksB[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
        
            for (int k = 0; k < n; k++)
            {
                result[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    printf("Matriks AXB\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0)
            {
                printf(" ");
            }
            printf("%d", result[i][j]);
        }

        printf("\n");
    }

    return 0;

}