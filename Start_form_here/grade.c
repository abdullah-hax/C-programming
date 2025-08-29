// Que: take a marks as input & check the grade.
#include <stdio.h>
int main()
{
   int marks;
   scanf("%d", &marks);

   if (marks >= 80 && marks <= 100)
      printf("A+");
   else if (marks >= 75 && marks <= 79)
      printf("A");
   else if (marks >= 70 && marks <= 74)
      printf("A-");
   else if (marks >= 65 && marks <= 69)
      printf("B+");
   else if (marks >= 60 && marks <= 64)
      printf("B-");
   else if (marks >= 55 && marks <= 59)
      printf("C+");
   else if (marks >= 50 && marks <= 54)
      printf("C-");
   else if (marks < 50 && marks >= 0)
      printf("Fail");

   if (marks > 100 || marks < 0)
      printf("Marks is not valid.Please input marks between 0 to 100.");
}
