#include <stdio.h>
int main()
{
    int I, J, K;
    for (I = 1; I <= 3; I++)
    {
        for (K = 3; K >= I; K--)
        {
            printf(" ");
        }
        for (J = 1; J <= I; J++)
        {
            printf("*");
        }
        for (J = 1; J < I; J++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (I = 1; I <= 2; I++)
    {
        for (K = 0; K <= I; K++)
        {
            printf(" ");
        }
        for (J = 2; J >= I; J--)
        {
            printf("*");
        }
        for (J = 2; J > I; J--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}