#include <stdio.h>
int main()
{

    int arr[] = {1, 2, 3, 4};
    int *ptr = arr; // ptr declare korlo then protom tar address e takalo (or, adress hold korlo)

    printf(" %d\n", *ptr); // setar value print korlo

    ptr++;                 // ditiotar address e takalo ( or, agerta muche die 2nd er adress hold korlo)
    printf(" %d\n", *ptr); // setar value print korlo

    *ptr = 25;             // setar value 25 kore dilo
    printf(" %d\n", *ptr); // setar value print korlo

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]); // ekn array ta hbe emn {1, 25, 3, 4}
    }

    return 0;
}

//---- Or you can understand by this , this is easy , but it should be read after the previous.

/*

#include<stdio.h>
int main()
{

    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;  // ptr = &arr[0]

    printf(" %d\n", *ptr);  // *ptr = value at address ptr = arr[0]

    ptr++;  // ptr = &arr[1]
    printf(" %d\n", *ptr);  // *ptr = arr[1]

    *ptr = 25;  // *ptr = arr[1] = 25
    printf(" %d\n", *ptr);  // *ptr = arr[1]

    for ( int i=0; i<4; i++)
    {
        printf("%d ", arr[i]);   // ekn array ta hbe emn {1, 25, 3, 4}
    }

    return 0;

}

*/