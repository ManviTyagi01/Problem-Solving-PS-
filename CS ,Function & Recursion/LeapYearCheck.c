#include<stdio.h>
int main()
{
    int Y;
    printf("Enter The Year ");
    scanf("%d",&Y);
    if(Y%4==0 && Y%100!=0 || Y%400==0)
    printf("Entered Year Is A Leap Year");
    else
    printf("Entered Year Is Not A Leap Year");
    return 0;

}