#include <stdio.h>
void transposeMatrix(int matrix[3][3]);
int main() {
    int matrix[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix);

    return 0;
}
void transposeMatrix(int matrix[3][3]) {
    int transpose[3][3];
    
    // Calculate the transpose
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
    
    // Display the transpose
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
