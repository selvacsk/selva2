#include<stdio.h>
void main()
{
int b;
int cont=0;
scanf("%d",&b);
while(b!=0)
{
b/=10;
++cont;
}
printf("%d",cont);
}
