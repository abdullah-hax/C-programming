
/*

Problem link : https://codeforces.com/problemset/problem/2121/A


 read testcase(12)
 for i = 1 to (12) :
    read n
    read start
    arr[n]
    for j= 0 to n-1 :
       read arr[j]

       |start - arr[0]| + |arr[n-1] - arr[0]|  or
       |start - arr[n-1]| + |arr[n-1] - arr[0]|


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);

    int i;
    int res;
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

        if (abs(start - arr[0]) < abs(start - arr[n - 1]))
        {
            res = abs(start - arr[0]) + abs(arr[n - 1] - arr[0]);
        }
        else
            res = abs(start - arr[n - 1]) + abs(arr[n - 1] - arr[0]);

        arr_store[i] = res;
    }

    for (i = 0; i < testcase; i++)
    {

        printf("%d\n", arr_store[i]);
    }
    return 0;
}


/* === Easy method ===

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);

    int i;
    int res;
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

        if (abs(start - arr[0]) < abs(start - arr[n - 1]))
        {
            res = abs(start - arr[0]) + abs(arr[n - 1] - arr[0]);
        }
        else
            res = abs(start - arr[n - 1]) + abs(arr[n - 1] - arr[0]);

        printf("%d\n", res);
    }
    return 0;
}

*/