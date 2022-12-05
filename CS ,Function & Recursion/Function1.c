#include <stdio.h>
#include <math.h>
int Sum(int N);
int Factorial(int N);
int Power(int N, int P);
int Palindrome(int N);
int Prime(int N);
int main()
{
    int N, X, Y, Z, P;
    printf("Enter The Number : ");
    scanf("%d", &N);
    printf("Enter The Power : ");
    scanf("%d", &P);
    X = Sum(N);
    Y = Factorial(N);
    Z = Power(N, P);
    Palindrome(N);
    printf("\n");
    Prime(N);
    printf("\n");
    printf("Sum Till The Given Range Is ---> %d", X);
    printf("\n");
    printf("Factorial Of The Given Number Is ---> %d", Y);
    printf("\n");
    printf("%d Raised To The Power %d Is ---> %d", N, P, Z);
    return 0;
}

int Sum(int N)
{
    int S = 0;
    S = N * (N + 1) * .5;
    return S;
}

int Factorial(int N)
{
    int I = 1, F = 1;
    for (I = 1; I <= N; I++)
    {
        F = F * I;
    }
    return F;
}

int Power(int N, int P)
{
    int I = 0, X = 1;
    for (I = 0; I < P; I++)
    {
        X = N * X;
    }
    return X;
}

int Palindrome(int N)
{
    int X = N, K, Y = 0;
    while (X != 0)
    {
        K = X % 10;
        Y = K + Y * 10;
        X = X / 10;
    }
    if (Y == N)
        printf("Given Number Is A Palindrome ");
    else
        printf("Given Number Is Not A Palindrome ");
}

int Prime(int N)
{
    int I, C = 0;
    for (I = 1; I <= N; I++)
    {
        if (N % I == 0)
            C = C + 1;
    }
    if (C == 2)
    {
        printf("Given Number Is A Prime Number ");
    }
    else
    {
        printf("Given Number Is Composite Number ");
        
    }
    return 0;
}
