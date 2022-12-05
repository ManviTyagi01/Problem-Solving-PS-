#include<stdio.h>
int main()
{
   char A='A';
   int I,J;
   for(I=1;I<4;I++)
   {
        for(J=0;J<I;J++)
            {
                printf("%c",A);
            }
        A=A+1;
        printf("\n");
   }
    return 0;    
}