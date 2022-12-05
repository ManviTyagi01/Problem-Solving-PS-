#include <stdio.h>
int main()
{
    int I, J;
    for (I = 0; I < 5; I++)
    {
        for (J = 0; J <= I; J++)
        {
            printf("%c", 69 + J - I);
        }
        printf("\n");
    }
    return 0;
}