#include<stdio.h>
int main()
{
int j,n,rem;
scanf("%d",&n);
for(j=0;n!=0;j++)
n=n/10;
printf("%d",j);
return 0;
}
