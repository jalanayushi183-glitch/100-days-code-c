//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int num = 2, den = 3;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)num / den;  
        num += 2;                  
        den += 4;                  
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
