#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2;
    char fname[100];
    int c;
    printf("Enter the filename to open for reading: ");
    scanf("%s", fname);
    fptr1 = fopen("source.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s\n", fname);
        exit(1);
    }
    printf("Enter the filename to open for writing: ");
    scanf("%s", fname);
    // Open another file for writing
    fptr2 = fopen("destination.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s\n", fname);
        exit(1);
    }
    // Read contents in our file
    while ((c = fgetc(fptr1)) != EOF)
    {
        fputc(c, fptr2);
    }
    printf("Contents copy to %s\n", fname);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}