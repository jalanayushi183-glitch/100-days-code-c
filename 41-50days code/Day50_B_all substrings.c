//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    len = strlen(str);

    printf("All substrings of the string:\n");

    
    for(i = 0; i < len; i++) {           
        for(j = 1; j <= len - i; j++) { 
            for(int k = i; k < i + j; k++) {
                putchar(str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
