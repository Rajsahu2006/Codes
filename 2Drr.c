#include<stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int result[3][2];

    // Transpose
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[j][i] = arr[i][j];
        }
    }

    // Print result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}