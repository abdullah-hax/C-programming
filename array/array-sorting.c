// Que: take some numbers as input & show sorting output of those values 

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int a[n], i;

  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[i])
      {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (i = 0; i < n; i++) // or, for (j=0; j<5; j++)
  {
    printf("%d ", a[i]); // or, printf("%d ", a[j]);     j dileo problem nei, eta i/j er upor depend korena.
  }
}



/*
----- A normal sorting -----

#include <stdio.h>

int main()
{
  int a[5], i;
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  if ((a[0] > a[1] && a[1] > a[2] && a[2] > a[3] && a[3] > a[4]) || (a[0] < a[1] && a[1] < a[2] && a[2] < a[3] && a[3] < a[4]))
  {
    printf("sorted");
  }
  else
    printf("not sorted");
}

*/