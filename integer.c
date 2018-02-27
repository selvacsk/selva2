#include<stdio.h>
int main()
{
	int c=0, i,n;
	scanf("%d",&n);
	i=n;
while(i!=0)
{


	i=i/10;
		c++;
}
printf("%d",c);
	return 0;
}
