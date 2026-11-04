
#include <stdio.h>

int main() {
    int rows;

    // Input number of lines
    printf("Enter no of lines = ");
    scanf("%d", &rows);

    int total_rows = 2 * rows - 1;

    for (int i = 0; i < total_rows; i++) {
        int current_row = (i < rows) ? i : total_rows - i - 1;
        int space = current_row * 2;
        int start = rows - current_row;

        // Print leading spaces
        for (int s = 0; s < space; s++) {
            printf(" ");
        }

        // Print increasing part
        for (int j = 0; j < rows - current_row; j++) {
            printf("%d ", start + j);
        }

        // Print decreasing part
        for (int j = rows - current_row - 2; j >= 0; j--) {
            printf("%d ", start + j);
        }

        printf("\n");
    }

    return 0;
}
