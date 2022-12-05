#include <stdio.h>
int main()
{
    int I, J, K;
    for (I = 1; I <= 5; I++)
    {
        for (K = 5; K >= I; K--)
        {
            printf(" ");
        }
        for (J = 1; J < I*2; J++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}