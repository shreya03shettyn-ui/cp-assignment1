//GRADING SYSTEM
#include<stdio.h>
int main()
{
int marks;
  printf("enter your total marks",marks);
  scanf("%d",&marks);
if(marks>=90)
   printf("grade is A",marks);
else if(marks>=75)
   printf("grade is B",marks);
else if(marks>=50)
   printf("grade is C",marks);
else
   printf("fail",marks);
return 0;
}
