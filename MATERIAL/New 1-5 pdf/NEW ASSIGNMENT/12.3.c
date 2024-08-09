/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s Data1.txt Data2.txt Data3.txt\n", argv[0]);
        return 1;
    }
    FILE *file1, *file2, *file3;
    int num;
    file1 = fopen(argv[1], "r");
    if (file1 == NULL) {
        perror("Error opening first input file");
        return 1;
    }
    file2 = fopen(argv[2], "r");
    if (file2 == NULL) {
        perror("Error opening second input file");
        fclose(file1);
        return 1;
    }
    file3 = fopen(argv[3], "w");
    if (file3 == NULL) {
        perror("Error creating output file");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    while (fscanf(file1, "%d", &num) == 1) {
        fprintf(file3, "%d\n", num);
    }
    while (fscanf(file2, "%d", &num) == 1) {
        fprintf(file3, "%d\n", num);
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    printf("Merged lists from %s and %s into %s.\n", argv[1], argv[2], argv[3]);
    printf("\n\t\t 23CS041_DHRUV_LOKADIYA");
    return 0;
}

