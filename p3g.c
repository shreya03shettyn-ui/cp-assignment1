//comma operator
#include<stdio.h>
int main()
{
  int a,b,c;
  c=(a=5,b=6,a+b);
  printf("\n %d",c);
  return 0;
}
