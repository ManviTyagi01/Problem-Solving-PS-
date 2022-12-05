#include<stdio.h>
int Median(int A[]);
int Mean(int A[]);
int main()
{
    int A[5]={0},I,J;
    for(I=0;I<5;I++)
    {
        printf("Enter The Value Of A[%d] ---> ",I);
        scanf("%d",&A[I]);
    }
    Mean(A);
    Median(A);
    
}
int Mean(int A[])
{
    int M=0,I;
    for(I=0;I<5;I++)
    {
        M=M+A[I];
    }
    M=M/5;
    printf("Mean Of The Given Numbers Is ---> %d",M);
}

int Median(int A[])
{
   int I,J,T;
   for(I=1;I<=4;I++)
    {
        for(J=1;J<=5-I;J++)
        {
            if(A[J]>A[J+1])
            {
                T=A[J];
                A[J]=A[J+1];
                A[J+1]=T;
            }
        }
    }
    printf("\nMedian Of The Given Numbers Is ---> %d",A[2]); 
}