#include <stdio.h>

int main() {
    char ch; 
    printf("Enter any character : ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("This is a small letter\n");
    }

    else if(ch >= 'A' && ch <= 'Z'){
        printf("This is a capital letter\n");
    }

    else if(ch >= '0' && ch <= '9'){
        printf("This is a digit\n");
    }

    else if(ch == '@' || ch == '#' || ch == '&' || ch == '*' || ch == '!'){
        printf("This is a special character\n");
    }
    return 0;
}