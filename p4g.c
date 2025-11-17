//sum of first n natural numbers using while loop
#include<stdio.h>
int main()
{
 int n;
 int i=1,sum=0;
 printf("enter a positive integer value: ");
 scanf("%d",&n);
 while(i<=n)
 {
  sum=sum+i;
  i++;
  }
 printf("the sum of first %d natural number is=%d \n ",n,sum);
 return 0;
 }
