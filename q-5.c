#include<stdio.h>
int main(){
    char ch;
    int num = 0;
    FILE* fptr = fopen("document.txt", "r");
    while((ch = fgetc(fptr)) != EOF){
        if((ch ==' ') || (ch == '\n')){
            num++;
        }
    }
    fclose(fptr);
    printf("Number of words in file %d", num + 1);

    return 0;
}