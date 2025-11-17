//input and display various data types
#include<stdio.h>
#include<stdbool.h>
int main()
{
  int i;
  float f;
  double d;
  char ch;
  char str[100];
  //taking inputs
  printf("enter an integer: ");
  scanf("%d",&i);
  printf("enter an float value: ");
  scanf("%f",&f);
  printf("enter an double value: ");
  scanf("%lf",&d);
  printf("enter an string: ");
  scanf("%s",str);
  printf("\n--------OUTPUT----------\n");
  printf("integer:%d \n ",i);
  printf("float:%f \n ",f);
  printf("double:%lf \n ",d);
  printf("string:%s \n ",str);
  return 0;
 }
