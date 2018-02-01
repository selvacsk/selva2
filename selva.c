#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the variable of a:");
scanf("%d",&a);
if(a<=0)
{
if(a==0)
printf("the given number is zero");
else
printf("the given number is positive");
}
else
printf("the given number is negative");
}
