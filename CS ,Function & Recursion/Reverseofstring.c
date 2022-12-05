#include <stdio.h>
int main()
{
char Name[20];
 gets(Name);
 puts(Name);  
int i=0,j,t;
while(Name[i]!='\0')

i=i+1;
i=i-1;
j=0;
while(j<i)
{
   t=Name[i];
   Name[i]=Name[j];
   Name[j]=t;
   j++;
   i--;
}
 printf("%s", Name);
 return 0;

    
}