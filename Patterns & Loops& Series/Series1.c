#include <stdio.h>
int main()
{
    int N, I, S = 0;
    printf("Enter The Value Of N : ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        S = S + I;
    }
    printf("Sum Of The Given Series Is : %d ", S);
    return 0;
}