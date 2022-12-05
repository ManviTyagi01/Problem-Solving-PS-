#include<stdio.h>
int main()
{
    int D,M,Y,L=0,I,T,A[13]={31,28,31,30,31,30,31,31,30,31,30,31},J,N=0,S;
    printf("Enter Date ");
    scanf("%d",&D);
    printf("Enter Month ");
    scanf("%d",&M);
    printf("Enter Year ");
    scanf("%d",&Y);
    for(I=4;I<Y;)
    {
        if((I%4==0 && I%100!=0) || (I%400==0))
        L=L+1;
        I=I+4;
    }
    for(J=0;J<M-1;J++)
    {
        N=N+A[J];
    }
    if((Y%4==0 && Y%100!=0) || (Y%400==0))
    {
        T=((Y-0001)*365)+(N)+(D-1)+1;
    }
    else
    {
        T=((Y-0001)*365)+(N)+(D-1);
    }
    S=T%7;
    if(S==0)
    printf("Monday");
    if(S==1)
    printf("Tuesday");
    if(S==2)
    printf("Wednesday");
    if(S==3)
    printf("Thursday");
    if(S==4)
    printf("Friday");
    if(S==5)
    printf("Saturday");
    if(S==6)
    printf("Sunday");
    return 0;
}