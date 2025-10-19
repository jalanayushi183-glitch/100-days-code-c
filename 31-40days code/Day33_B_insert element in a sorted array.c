//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, element;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &element);
    
    
    for(i = 0; i < n; i++) {
        if(element < arr[i]) {
            break;
        }
    }
    
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    
    arr[i] = element;
    n++; 
    
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
