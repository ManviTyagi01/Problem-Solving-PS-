#include <stdio.h>
int main()
{
    int N, I, K;
    printf("Enter the number : ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        for (K = 0; K <= I; K++)
        {
            printf("*");
        }
        printf(" ");
    }
    return 0;
}