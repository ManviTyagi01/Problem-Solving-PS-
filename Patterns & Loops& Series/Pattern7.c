#include <stdio.h>
int main()
{
    int I, J, K;
    for (I = 1; I <= 4; I++)
    {
        for (K = 3; K >= I; K--)
        {
            printf(" ");
        }
        for (J = 0; J < I; J++)
        {
            printf("%d", I - J);
        }
        for (J = 1; J < I; J++)
        {
            printf("%d", J + 1);
        }
        printf("\n");
    }
    return 0;
}