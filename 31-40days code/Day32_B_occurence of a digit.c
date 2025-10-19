//Find the digit that occurs the most times in an integer number


#include <stdio.h>

int main() {
    long long num;
    int digit, i, freq[10] = {0}, max = 0, most_freq_digit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            most_freq_digit = i;
        }
    }
  printf("The digit that occurs most is %d (occurs %d times)\n", most_freq_digit, max);

    return 0;
}
