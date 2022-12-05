#include<stdio.h>
int Power(int A,int B);
int main()
{
    int A,B;
    printf("Enter The Base : ");
    scanf("%d",&A);
    printf("Enter The Power : ");
    scanf("%d",&B);
    printf("%d",Power(A,B));
}
int Power(int A,int B)
{
    if(B%2==0)
    {
        if(B==1)
        return A;
        else
        return Power(A,B/2)*Power(A,B/2);
    }
    else
    {
        if(B==1)
        return A;
        else
        return A*Power(A,B/2)*Power(A,B/2);
    }
}