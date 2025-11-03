//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i+1] == '\0') {
            int end = (str[i] == ' ') ? i - 1 : i;  
            reverseWord(str, start, end);
            start = i + 1;  
        }
    }

    printf("Sentence after reversing each word: %s\n", str);
    return 0;
}
