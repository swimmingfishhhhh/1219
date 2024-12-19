/* Keyboard input to string, and append to output.txt */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTER 13
#define MAX 80

int main(void) {
    FILE *fptr;
    char str[MAX], ch; // Declare string array str[] to store keyboard input
    int i = 0;
    fptr = fopen("output.txt", "a"); // Open the file for appending
    printf("請輸入字串，按 ENTER 鍵結束輸入:\n"); // Prompt for input
    
    while ((ch = getche()) != ENTER && i < MAX) { // Input loop, stops at ENTER or MAX characters
        str[i++] = ch; // Add character to str array
    }
    putc('\n', fptr); // Add a newline to the file
    fwrite(str, sizeof(char), i, fptr); // Write the string to the file
    fclose(fptr); // Close the file
    printf("\n檔案附加完成!!\n"); // Output completion message
    system("pause"); // Pause the program
    return 0;
}


