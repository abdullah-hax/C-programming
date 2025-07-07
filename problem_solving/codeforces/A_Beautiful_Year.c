/*

Problem link : https://codeforces.com/problemset/problem/271/A

input constraints 1000 to 9000.
testcase e 9000 input dile jate tar porer valid year ta aste pare sevabe code koro.
9000 er porer valid year 9012.

*/

#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int yr = n + 1; yr <= 9012; yr++)
  {
    int arr[4], i, j, store;

  // year er every digit arr te store kora. ***(see note)
    
    // Method 2 (applicable for n times digit)
    for (i = 0, store = yr; i < 4; i++)
    {
      arr[i] = store % 10;
      store = store / 10;
    }

  // kno digit soman na hle yr print kora.  ***(see note)

    // Method (applicable for n times digit)
    int count = 1;
    for (i = 0; i < 4; i++)
    {
      for (j = i + 1; j < 4; j++)
      {
        if (arr[i] == arr[j])
        {
          count = 0;
          break;
        }
      }
      if (count == 0)
        break;
    }
    if (count)
    {
      printf("%d", yr);
      return 0;
    }
  }
  return 0;
}


/* === Note ===

  ### Method 1 
    arr[0] = yr % 10;
    arr[1] = (yr / 10) % 10;
    arr[2] = (yr / 100) % 10;
    arr[3] = (yr /1000) ;

  ### Method 1
    if(arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3] &&
      arr[1] != arr[2] && arr[1] != arr[3] &&
      arr[2] != arr[3]){
        printf("%d", yr);
        break;
    }

*/