#include<stdio.h>
int main()
{
int j,h,remainder;
scanf("%d",&h);
for(j=0;h!=0;j++)
h=h/10;
printf("%d",j);
return 0;
}
