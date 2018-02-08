#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the three different numbers:");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c)
   {
     printf("%d the largest number is.", a);
   }
  if(b>c)
  {
      printf("%d the largest number is.", b);
  }
  else
  {
     printf("%d the largest number is.", c);
  }
return 0;
}



