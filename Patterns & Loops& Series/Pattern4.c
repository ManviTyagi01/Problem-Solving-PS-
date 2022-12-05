#include <stdio.h>
int main()
{
    int I, J;
    for (I = 0; I < 4; I++)
    {
        for (J = 0; J <= I; J++)
        {
            printf("%c", 65 + J + I);
        }
        printf("\n");
    }
    return 0;
}