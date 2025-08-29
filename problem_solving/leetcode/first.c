/*

declare n;
read n;
declare nums[n], target;
read nums, target;

for i = 0 to n-2 :
    for j = i + 1 to n-1:
       if(nums[i] + nums[j] == target)
           print(i, j)
           return 0


*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n], target;
    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                printf("indices : %d,%d", i, j);
                return 0;
            }
        }
    }
    return 0;
}