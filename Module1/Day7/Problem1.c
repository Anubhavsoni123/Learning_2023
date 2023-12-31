#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;
  
    sourceFile = fopen("C:/Users/user/Documents/Source.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    destinationFile = fopen("C:/Users/user/Documents/destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}