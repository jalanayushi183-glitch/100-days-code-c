//Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int diag[n];  
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", diag[i]);
    }

    if (flag == 1)
        printf("\n\nAll diagonal elements are distinct.\n");
    else
        printf("\n\nDiagonal elements are NOT distinct.\n");

    return 0;
}
