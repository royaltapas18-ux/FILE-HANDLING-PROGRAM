#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;          // File pointer
    char text[100];    // Buffer to store text

    /* -------- WRITE OPERATION -------- */
    fp = fopen("file.txt", "w");   // Create / open file in write mode
    if (fp == NULL) {
        printf("Error creating file\n");
        return 0;
    }

    printf("Enter text to write:\n");
    gets(text);                     // Read input from user
    fprintf(fp, "%s", text);        // Write data to file
    fclose(fp);                     // Close file

    /* -------- APPEND OPERATION -------- */
    fp = fopen("file.txt", "a");    // Open file in append mode
    printf("Enter text to append:\n");
    gets(text);
    fprintf(fp, "\n%s", text);
    fclose(fp);

    /* -------- READ OPERATION -------- */
    fp = fopen("file.txt", "r");    // Open file in read mode
    printf("\nFile contents:\n");
    while (fgets(text, sizeof(text), fp)) {
        printf("%s", text);
    }
    fclose(fp);

    return 0;
}
