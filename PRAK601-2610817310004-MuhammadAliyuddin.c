#include <stdio.h>

int main()
{
    int rows, column;
    int matriks[100][100];

    scanf ("%d %d", &rows, &column);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j > 0)
            {
                printf(" ");
            }
            printf("%d", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}