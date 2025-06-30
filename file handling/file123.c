#include <stdio.h>

int main() {
  int n, i , count=0;
  scanf("%d", &n);
  for(i=2; i<=n/2; i++)
  {
    if(n%i==0)
    {
        count++;
    }
  }

  if(n<2)
  printf("Non prime");
  else if (count)
  {
    printf("Non prime");
    printf("\nThe number of integer divisors is %d", count+2);
  }
  else 
  printf("Prime");
}
