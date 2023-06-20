#include <stdio.h>

void toggleCase(char *string) {
    while (*string != '\0') {
        if (*string >= 'a' && *string <= 'z')
            *string = *string - 32;
        else if (*string >= 'A' && *string <= 'Z')
            *string = *string + 32;
        string++;
    }
}

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    toggleCase(string);

    printf("Toggled case: %s", string);

    return 0;
}
