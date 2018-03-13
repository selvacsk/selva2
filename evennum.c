#include<stdio.h>
#include<conio.h>
void main()
{
    int s1,s2,rem,j;
    printf("Give the first number for the range: \n");
    scanf("%d",&s1);
    printf("Give the final number for the range: \n");                  
    scanf("%d",&s2); 
    printf("\n the even number between %d and %d are",s1,s2);
    for(j=s1;j<=s2;j++)
    {
        rem=j%2;
        if(rem==0)
        printf("\n%d",j);
    }
    return 0;
}
