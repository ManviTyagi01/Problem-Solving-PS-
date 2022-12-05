#include<stdio.h>
int main()
{
    int I,J,K;
    for(I=1;I<=5;I++)
    {
        for(J=1;J<=I;J++)
        {
            printf("%d",J);
        }
        for(K=5;K>I;K--)
        {
            printf(" ");
        }
        for(K=5;K>I;K--)
        {
            printf(" ");
        }
        for(J=I;J>=1;J--)
        {
            printf("%d",J);
        }
        printf("\n");
    }
    return 0;
}