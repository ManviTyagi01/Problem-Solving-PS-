#include<stdio.h>
int main()
{
    int I,J,K;
    for(I=6;I>=1;I--)
    {
        for(J=1;J<=I;J++)
        {
            printf("%d",J);
        }
        for (K =12 ; K > I*2; K--)
        {
            printf(" ");
        }
        for(J=I;J>=1;J--)
        {
            printf("%d",J);
        }
        printf("\n");
    }
}