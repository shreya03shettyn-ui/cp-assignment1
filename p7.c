//even or odd
#include<stdio.h>

 void checkoddeven(int num)
 {
 if(num % 2==0)
 printf("\n %d is even",num);
 else
 printf("\n %d is odd",num);
 }
int main()
{
 int num1,num2,num3;
 printf("enter three digits");
 scanf("%d %d %d",&num1, &num2,&num3);
 printf("\n checking the numbers:");
 checkoddeven(num1);
 checkoddeven(num2);
 checkoddeven(num3);
 return 0;
 }
