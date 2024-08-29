#include<stdio.h>

int main(){
    FILE* fptr = fopen("output.txt", "w");
    char str[] = "Hello, Your name with greeting !";
    fputs(str,fptr);
    fclose(fptr);
    return 0;
}