#include<stdio.h>
#include<math.h>
void main()
{
    int number,val=0,rem=0,cube=0,temp,num;
 
    printf("enter a num");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        cube=pow(rem,3);
        val=val+cube;
        num=num/10;
    }
    if (val==temp)
            printf("The given no is armstrong no are YES");
    else
            printf("The given no is not a armstrong no are NO");
}
