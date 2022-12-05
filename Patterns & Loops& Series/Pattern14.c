#include<stdio.h>
int Pattern(int N);

int main()
{
    int N;
    printf("Enter The Number : ");
    scanf("%d",&N);
    printf("%d",Pattern(N));
}

int Pattern(int N)
{
    if(N<=0)
    {
        return N;
    }
    else
    {
        printf("%d ",N);
        Pattern(N-5);
        printf("%d ",N);
    }
}
