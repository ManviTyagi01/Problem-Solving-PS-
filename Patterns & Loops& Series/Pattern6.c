#include <stdio.h>
int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j + i - 1);
        }
        for (k = 2; k <= i; k++)
        {
            printf("%d", i + j - k - 1);
        }
        printf("\n");
    }
    return 0;
}