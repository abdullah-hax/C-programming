// #include <stdio.h>
// int main()
// {

//     int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//     int i = 0, j = 1, count = 1;
//     for (; i < 10; i++)
//     {
//         for (; j < 10; j++)
//         {
//             if (arr[i] != arr[j])
//             {
//                 count++;
//                 arr[i + 1] = arr[j];
//                 break;
//             }
//         }

//         if (j >= 10)
//         {
//             arr[i + 1] = 0;
//         }
//     }

//     printf("%d\n", count);

//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

#include <stdio.h>

int removeDuplicates(int nums[], int numsSize) {
    if (numsSize == 0) return 0;

    int k = 1; // First element is always unique, so start from 1

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i]; // Copy the unique value
            k++;               // Increase count of unique values
        }
    }

    return k;
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, size);

    printf("Unique count (k): %d\n", k);
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        if (i < k)
            printf("%d ", nums[i]);
        else
            printf("_ ");
    }
    printf("\n");

    return 0;
}



