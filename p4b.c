//c program for voting elegiblity
#include<stdio.h>
int main()
{
int age;
  printf("enter your age");
  scanf("%d",&age);
  if(age>18)
    printf("the given age is eligible for voting",age);
else
    printf("the given age is not eligible for voting",age);
return 0;
}
