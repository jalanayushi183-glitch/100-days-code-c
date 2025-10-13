//Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

int main() {
    int num, binary = 0, place = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 2;        
        binary = binary + remainder * place;  
        num = num / 2;              
        place = place * 10;   
    }

    printf("Binary representation is: %d\n", binary);

    return 0;
}
