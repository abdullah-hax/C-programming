/* 

 Problem link : https://codeforces.com/problemset/problem/231/A

*/


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n], i, j, count=0;
//     for (i=1; i<=n; i++)
//     {
//        for (j=1; j<=3; j++)
//         {
//             scanf("%d", &a[j]);
//         }

//         if ( (a[1] + a[2] + a[3])>=2)
//         {
//             count++ ;
//         }
        
//         printf("\n");
//     }
//     printf("%d", count);
// }

#include <stdio.h>
int main()
{
    int n;
    int a , b, c;
    scanf("%d", &n);
    int i, count=0;
    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        

        if ( (a + b + c)>=2)
        {
            count++ ;
        }
    }
    printf("%d", count);
}