#include <stdio.h>
int main()
{
    int I, J;
    for (I = 1; I <= 4; I++)
    {
        for (J = 0; J < I; J++)
        {
            printf("%d ", I + J);
        }
        printf("\n");
        printf("\n");
    }
}