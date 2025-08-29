// Que : The input will contain an integer A(0≤A<200000000). Print the formatted number.

#include <stdio.h>
int main()
{
  int a,n1, n2;
  scanf("%d", &a);
  
  
  if (a>999999)                     //123045006
  {
    n1 = a%1000;
    a = a/1000;
    n2 = a%1000;
    a = a/1000;
    printf("%d,%03d,%03d", a, n2, n1);   
  }
  else if (a<=999999 && a>999)         //12003       
  {
    n1 = a%1000;
    a = a/1000;
    printf("%d,%03d", a, n1);   
  }
  else{                              //23
    printf("%d",a);  
  }
   
}

// %03d na dile 123,012 => 123,12