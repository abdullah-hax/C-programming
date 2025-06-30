#include<stdio.h>

int main(){

    FILE *myFile;
    char ch;

    myFile = fopen("D:File_handling.txt","r");
    if(myFile == NULL){
        printf("File doesn't exist.\n");
        return 1;
    }
    else{
        printf("File opened.\n");

        while ((ch = getchar()) != EOF) {
            fputc(ch,myFile); // Print each character
        }
    }

    fclose(myFile);
    printf("File closed.\n");
    return 0;
}