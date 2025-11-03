//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int maxLen = 0, len = 0, start = 0, maxStart = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; 

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\t') {
            len++;  
            if(len == 1) start = i; 
        } else {
            if(len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0; 
        }
    }

    if(len > maxLen) {
        maxLen = len;
        maxStart = start;
}
    printf("Longest word: ");
    for(i = maxStart; i < maxStart + maxLen; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
