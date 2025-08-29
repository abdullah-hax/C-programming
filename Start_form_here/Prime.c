
// Que : take a value as input and check whether it is a prime number. If it is non prime, determine how many integer divisors it has.

/*

  *** Keywords ***
      => Prime numbers has two positive divisors(that's why 1 is not prime.))
      => prime number starts with 2.
      => divisor mane vajok , j nisseshe bivajjo kore.

*/



#include <stdio.h>

int main()
{
  int n, i, count = 0;
  scanf("%d", &n);

  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }

  if (n < 2)
    printf("Non prime");
  else if (count)
  {
    printf("Non prime");
    printf("\nThe number of integer divisors is %d", count + 2);
  }
  else
    printf("Prime");
}



// Alternative (take extra execution time)

/*

#include<stdio.h>
int main()
{
    int n, i, count=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)

        count++;
    }
    if (count==2)
    {
        printf("prime");
    }
    else printf("non prime");
    printf("%d", count);

}

*/
