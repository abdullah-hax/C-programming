/*


 read testcase(12)
 for i = 1 to (12) :
    read n
    read start
    arr[n]
    for i= 0 to n-1 :
       read arr[i]

    if(arr[n-1] > start) :
       res1 = start - a[0]
       res2 = arr[n-1] - a[0]
       res = res1 + res2

    else
       res = start - a[0]


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);

    int i;
    int res, res1, res2;
    int arr_store[testcase];
    for (i = 0; i < testcase; i++)
    {
        int n;
        int start;
        scanf("%d %d", &n, &start);

        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        if (arr[n - 1] > start)
        {
            if ((arr[n - 1] - start) < (start - arr[0]))
            {
                res1 = arr[n - 1] - start;
                res2 = arr[n - 1] - arr[0];
                res = res1 + res2;
            }
            else
            {
                res1 = abs(start - arr[0]); // it can be negative , so abs() is used.
                res2 = arr[n - 1] - arr[0];
                res = res1 + res2;
            }
        }

        else
            res = abs(start - arr[0]); // it can be negative, so abs() is used.

        arr_store[i] = res;
    }

    for (i = 0; i < testcase; i++)
    {

        printf("%d\n", arr_store[i]);
    }
    return 0;
}