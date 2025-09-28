#include <stdio.h>

int main() {
    long long binary;
    long long result = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while(binary > 0) {
        digit = binary % 10;
        if(digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 0;
        }

        
        digit = 1 - digit;

        
        result += digit * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's complement: %lld\n", result);
    return 0;
}
