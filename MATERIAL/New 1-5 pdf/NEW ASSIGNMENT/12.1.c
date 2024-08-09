/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
int main() {
    FILE *sourceFile, *destinationFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        printf("\n\t\t 23CS041_DHRUV_LOKADIYA");
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
        putchar(ch);
    }
    if (ferror(sourceFile)) {
        perror("Error reading from source file");
    }
    if (ferror(destinationFile)) {
        perror("Error writing to destination file");
    }
    fclose(sourceFile);
    fclose(destinationFile);
    printf("\n\t\t 23CS041_DHRUV_LOKADIYA");
    return 0;
}

