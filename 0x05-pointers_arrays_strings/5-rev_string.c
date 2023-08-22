#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string( char* str) {
    size_t len = strlen(str);
    char* str2 = malloc((len + 1) * sizeof(char)); // Allocate memory dynamically
    if (str2 == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    strcpy(str2, str);

    // Reverse the string
    for (size_t i = 0; i < len / 2; i++) {
        char temp = str2[i];
        str2[i] = str2[len - i - 1];
        str2[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str2);

    free(str2); // Free the allocated memory
}
