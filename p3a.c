//arithmtic operation
#include<stdio.h>
int main()
{
  int a,b;
  int sum,sub,mult,div,mod;
  printf("\n enter the value of a");
  scanf("%d",&a);
  printf("\n enter the value of b");
  scanf("%d",&b);
  sum=a+b;
  sub=a-b;
  mult=a*b;
  div=a/b;
  mod=a%b;
  printf("\n addition=%d",sum);
  printf("\n subtraction=%d",sub);
  printf("\n multiplication=%d",mult);
  printf("\n division=%d",div);
  printf("\n modulus=%d",mod);
  return 0;
}
