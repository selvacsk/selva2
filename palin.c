#include<stdio.h>
void main()
{
    int a,b,rem;
    int sum=0;
    scanf("%d",&a);
    if(a<=1000)
    b=a;
    while(a>0)
    {
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    if(b==sum)
    printf("yes");
    else
    printf("no");
}
    



