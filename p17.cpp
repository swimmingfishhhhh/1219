/* Use fread() to read file content */
#include <stdio.h>
#include <stdlib.h>

#define MAX 80

int main(void) {
    FILE *fptr;
    char str[MAX]; // Array to store the content read by fread()
    int bytes;     // To store the number of elements successfully read
    fptr = fopen("output.txt", "r"); // Open the file for reading

    while (!feof(fptr)) { // Continue until the end of the file
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // Read up to MAX-1 characters
        str[bytes] = '\0'; // Null-terminate the string
        printf("%s\n", str); // Print the file content
    }

    fclose(fptr); // Close the file
    system("pause"); // Pause the program
    return 0;
}

