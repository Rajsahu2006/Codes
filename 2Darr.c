#include <stdio.h>

int main() {
    int arr[3][3] = { {1, 2, 3},{4,5,6},{7,8,9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);  // print each element with a space
        }
        printf("\n");  // move to the next line after each row
    }

    return 0;
}





