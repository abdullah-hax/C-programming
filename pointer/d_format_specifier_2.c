#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    printf("Address of x: %p\n", ptr);    // ptr = &x = x ram er j cell e ache tar address(suppose it is 15), so "ptr = &x = r-15"
    printf("Address of ptr: %p\n", &ptr); // &ptr = ptr namok pointing variable ti ram er j cell e ache sei cell er address(suppose it is 20), so "&ptr = r-20"

    return 0;

    // pointer value = address of x = x joto no. cell e ache sei address
    // pointer adress = pointer joto no. cell e ache sei address

}
