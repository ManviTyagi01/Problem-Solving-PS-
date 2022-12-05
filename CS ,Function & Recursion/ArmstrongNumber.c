#include<stdio.h>
#include<math.h>
int ArmstrongNumber(int N);

int main()
{
    int N;
    printf("Enter The Number : ");
    scanf("%d",&N);
    ArmstrongNumber(N);
}

int ArmstrongNumber(int N)
{
    int K=N,X,C=0,S=0;
    while(K!=0)
    {
        K=K/10;
        C=C+1;
    }
    K=N;
    while(K!=0)
    {
        X=K%10;
        S=S+pow(X,C);
        K=K/10;
    }
    if(S==N)
    printf("Given Number Is A Armstrong Number ");
    else
    printf("Given Number Is Not A Armstrong Number ");
}