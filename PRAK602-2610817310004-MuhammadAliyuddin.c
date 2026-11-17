#include <stdio.h>

int main()
{
    int n, zetsu[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < n; i++)
    {
        zetsu[i] = zetsu[i] * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", zetsu[i]);
    }

    printf("\n");

    return 0;


}