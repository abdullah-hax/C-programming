// Total marks of students in a class.

#include <stdio.h>
int main()
{
    int n;
    printf("How much marks you will input?- ");
    scanf("%d", &n);

    int marks[n], i, sum = 0;

    printf("Write the marks: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("Here is the marks- ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
    printf("\nThe sum of marks-  %d", sum);
    return 0;
}