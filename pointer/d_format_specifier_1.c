#include <stdio.h>
int main() {

    int a[] = {1,2,3,4,5};

        printf("%d\n", a);    // This is wrong, you should use format specifier %p to print address .

        printf("%p\n", a);   // This is right.
}

//(Note: The actual address may vary each time you run the program.)
