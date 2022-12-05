#include<stdio.h>
int main()
{
    int BS,TS,HRA,DA,A,PF;
    char G;
    printf("Enter The Basic Salary :");
    scanf("%d",&BS);
    printf("Enter The Grade In Uppercase:");
    scanf("%c",&G);
    if (G=='A')
    A=1700;
    else if (G=='B')
    A=1500;
    else
    A=1300;
    HRA=(BS/100)*20;    
    DA=(BS/100)*50;    
    PF=(BS/100)*11;
    TS=BS+HRA+DA+A-PF;
    printf("Total Salary Is: %d",TS);
    return 0;
}