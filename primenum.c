#include<stdio.h>
int checktheprimenumber(int n);
int main()
{
    int m1,m2,flag,i;
    printf("enter the two positive integer:");
    scanf("%d%d",&m1,&m2);
    printf("prime number  between are %d and%d",m1,m2);
    for(i=m1+1;i<m2;++i)
    {
    flag=checktheprimenumber(i);
    if(flag==1)
    printf("%d",i);
    }
    return 0;
}
    int checktheprimenumber(int n)
    {
    int j,flag=1;
    for(j=2;j<=n/2;++j)
    {
        if(n%j==0)
    { 
        flag =0;
        break;
    }
    }
        return flag;
}
