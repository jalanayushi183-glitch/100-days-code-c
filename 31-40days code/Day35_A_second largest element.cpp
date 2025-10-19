//Find the second largest element in an array

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int first, second;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -2147483648; 

    
    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -2147483648)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("The second largest element is: %d\n", second);

    return 0;
}
