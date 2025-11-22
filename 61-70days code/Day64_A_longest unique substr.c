//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>
#include <string.h>

#define CHAR_SET 256 

int main() {
    char s[1000];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);
    if (s[n-1] == '\n') s[n-1] = '\0'; 
    n = strlen(s);

    int lastIndex[CHAR_SET]; 
    for (int i = 0; i < CHAR_SET; i++)
        lastIndex[i] = -1;

    int max_len = 0;
    int start = 0; 

    for (int i = 0; i < n; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1; 
        }
        lastIndex[(int)s[i]] = i;
        int curr_len = i - start + 1;
        if (curr_len > max_len)
            max_len = curr_len;
    }

    printf("Length of longest substring without repeating characters: %d\n", max_len);

    return 0;
}






























