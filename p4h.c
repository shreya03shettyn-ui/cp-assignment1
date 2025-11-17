//sum of first n natural number using do while loop
#include<stdio.h>
int main()
{
 int n;
 int sum=0;
 int i=1;
 printf("enter a positive integer: ");
 scanf("%d",&n);
 do
 {
   sum=sum+i;
   ++i;
   }while(i<=n);
   printf("the sum of first n natural number is=%d \n ",sum);
   return 0;
 }
