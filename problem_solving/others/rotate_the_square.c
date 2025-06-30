/*

Problem D — Rotate the Square

You are given an N x N square matrix of integers.
Your task is to rotate the matrix **90 degrees clockwise**.

Input:
- The first line contains a single integer N (1 ≤ N ≤ 100), the size of the matrix.
- Each of the next N lines contains N space-separated integers, representing the matrix.

Output:
- Print the rotated matrix, each row on a new line with space-separated values.

Example:

Input:
3
1 2 3
4 5 6
7 8 9

Output:
7 4 1
8 5 2
9 6 3


*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][3];
    int i, j;

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int transpose[3][n];
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int k = 0; k < 3; k++)
    {
        for (i = 0, j = n - 1; i < j; i++, j--)
        {
            int temp = transpose[k][i];
            transpose[k][i] = transpose[k][j];
            transpose[k][j] = temp;
        }
    }

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}

/*

Let's try with this example :

Input:
1   2   3   4   5
6   7   8   9  10
11 12  13 14  15
16 17  18 19  20
21 22  23 24  25
26 27  28 29  30
31 32  33 34  35

Output:
31 26 21 16 11  6 1
32 27 22 17 12  7 2
33 28 23 18 13  8 3
34 29 24 19 14  9 4
35 30 25 20 15 10 5


Just take :
arr[n][5]
transpose[5][n]
for(int k = 0; k < 5; k++) {...}


*/