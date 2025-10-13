//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;  
    int num, den;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        num = 2 * i - 1;   
        den = 2 * i;       
        
        if (i == 1)
            sum += 1.0; 
        else
            sum += (double)num / den;
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
