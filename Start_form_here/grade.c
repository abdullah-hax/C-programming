// Que: take a marks as input & check the grade.
#include <stdio.h>
int main()
{
   int num;
   scanf("%d", &num);

   if (num >= 80 && num <= 100)
      printf("A+");
   else if (num >= 75 && num <= 79)
      printf("A");
   else if (num >= 70 && num <= 74)
      printf("A-");
   else if (num >= 65 && num <= 69)
      printf("B+");
   else if (num >= 60 && num <= 64)
      printf("B-");
   else if (num >= 55 && num <= 59)
      printf("C+");
   else if (num >= 50 && num <= 54)
      printf("C-");
   else if (num < 50 && num >= 0)
      printf("Fail");

   if (num > 100 || num < 0)
      printf("Marks is not valid.Please input marks between 0 to 100.");
}
