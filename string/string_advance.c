
#include <stdio.h>

int input(char str[], int n) {
    int ch, i=0;
    
    while((ch = getchar()) != '\n') {
        if(i < n)         //------------------eta dara tumi koita character print krte cacco ta control krte parbe
        str[i++] = ch;
    }

    str[i] = '\0';
    return i;
    //  \n = 10, \0 = 0 (ASCII CODE)
}

int main() {
    char str[100];
    int n = input(str, 5);

    printf("%d %s", n, str);
    return 0; 
}

// input: hello, how are you?


/* 
    str[i] = ch;
    i++;
or,  
    str[i++] = ch;
*/