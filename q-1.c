#include<stdio.h>

int main(){
    FILE* fptr = fopen("sample.txt", "r");
    if(fptr == NULL){
        printf("file not open");
    }
    fclose(fptr);
    return 0;
}