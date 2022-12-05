#include <stdio.h>
int main()
{
    int A[50][50] = {0}, R, C, N = 1, X, TC, TR;
    printf("Enter The Order Of Magic Square : ");
    scanf("%d", &X);
    A[0][X / 2] = 1;
    TC = X / 2, TR = 0;
    while (N < 25)
    {
        TR = TR - 1;
        if (TR < 0)
        {
            TR = X - 1;
        }
        TC = TC + 1;
        if (TC > (X - 1))
        {
            TC = 0;
        }
        N = N + 1;
        if (A[TR][TC] == 0)
        {
            A[TR][TC] = N;
            R = TR;
            C = TC;
        }
        else
        {
            R = R + 1;
            A[R][C] = N;
            TR = R;
            TC = C;
        }
    }
    for (R = 0; R < X; R++)
    {
        for (C = 0; C < X; C++)
        {
            printf("%d ", A[R][C]);
        }
        printf("\n");
    }
}