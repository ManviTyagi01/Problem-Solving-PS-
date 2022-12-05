#include <stdio.h>
int main()
{
    int X,Y;
    printf("Enter The X Coordinate ");
    scanf("%d",&X);
    printf("Enter The Y Coordinate ");
    scanf("%d",&Y);
    if (X>0 && Y>0)
    printf("First Quadrant");
        else if(X<0 && Y>0)
        printf("Second Quadrant");
            else if(X<0 && Y<0)
            printf("Third Quadrant");
                else if(X>0 && Y<0)
                printf("Fourth Quadrant");
                    else if(X==0 && Y==0)
                    printf("Origin");
                        else if(X==0)
                        printf("Y-Axis");
                            else if(Y==0)
                            printf("X-Axis");
                            

    return 0;
    
}