//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (all integers from 0 to %d except one):\n", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total_sum = n * (n + 1) / 2;

    int arr_sum = 0;
    for (int i = 0; i < n; i++)
        arr_sum += arr[i];

    int missing = total_sum - arr_sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
