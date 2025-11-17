//sum of n numbers
#include<stdio.h>
int main()
{
 int n,sum=0,i;
 printf("enter the positive integer");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 sum+=i;
 printf("sum of the first %d natural number is: %d \n ",n,sum);
 return 0;
 }
