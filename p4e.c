//switch
#include<stdio.h>
int main()
{
 int choice;
  printf("enter ur choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  printf("you  entered choice1");
  break;
  case 2:
  printf("you entered choice 2");
  break;
  default:
  printf("invalid choice");
  }
}
