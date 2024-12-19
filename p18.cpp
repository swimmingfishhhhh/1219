/* Use fread() to read file content */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *in, *out;
    int cnt;
    char str[100];
    
    in = fopen("welcome.txt", "r"); // Open "welcome.txt" for reading
    out = fopen("output.txt", "w"); // Open "output.txt" for writing
    
    while (!feof(in)) { // Continue until the end of the input file
        cnt = fscanf(in, "%s", str); // Read content from input file
        if (cnt > 0) {
            fprintf(out, "%s\n", str); // Write content to output file
        }
    }
    
    fclose(in); // Close the input file
    fclose(out); // Close the output file
    system("pause"); // Pause the program
    return 0;
}


