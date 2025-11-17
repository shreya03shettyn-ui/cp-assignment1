//write a program - swapping of two numbers
#include<stdio.h>
int main()
{
  int a=5,b=6,temp;
  printf("value of a before swapping is=%d\n",a);
  printf("value of b before swapping is=%d\n",b);
  temp=a;
  a=b;
  printf("value of a after swapping is=%d\n",a);
  b=temp;
  printf("value of b after swapping is=%d\n",b);
  return 0;
  }
