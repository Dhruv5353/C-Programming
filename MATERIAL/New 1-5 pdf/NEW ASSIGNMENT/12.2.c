/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include <stdio.h>
int main() {
    FILE *file;
    char letter = 'A';
    file = fopen("ALPHABETS.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    for (letter = 'A'; letter <= 'Z'; ++letter) {
        fputc(letter, file);
    }
    fclose(file);
    file = fopen("ALPHABETS.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    long pos = ftell(file);
    while (pos >= 0) {
        fseek(file, pos, SEEK_SET);
        int ch = fgetc(file);
        if (ch != EOF) {
            putchar(ch);
        }
        pos--;
    }
    fclose(file);
    printf("\n\t\t23CS041_DHRUV_LOKADIYA");
    return 0;
}

