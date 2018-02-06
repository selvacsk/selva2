#include <stdio.h>
int main()
{
  char c;
  printf("enter the character: ");
  scanf("%c",&c);
  if(c>='a' && c<='z')
{
  printf("%cis a  alphabet.",c);
} 
else
{
  printf("%cis a not an alphabet.",c);
}
return 0;
}
