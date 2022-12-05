#include<stdio.h>
int PrimeNoInRange(int I);
int Prime(int N);
int main()
{
    int S,E,I;
    printf("Enter The Starting Value : ");
    scanf("%d",&S);
    printf("Enter The Ending Value : ");
    scanf("%d",&E);
    for(I=S;I<=E;I++)
    {
        PrimeNoInRange(I);
    }
    return 0;
}

int PrimeNoInRange(int N)
{   
    if(Prime(N)==1)
    {
        printf("%d ",N);
    }
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
       return 1;
    }
    else
    {
        return 0;
    }
}