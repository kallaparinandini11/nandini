#include <stdio.h>

int main() {
    int a[9][9];
    int i, j, k, valid = 1;

    printf("Enter the 9x9 Sudoku board:\n");

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &a[i][j]);
        }
    }

 
    for (i = 0; i < 9; i++) {
        int seen[10] = {0};

        for (j = 0; j < 9; j++) {
            if (a[i][j] < 1 || a[i][j] > 9 ||
                seen[a[i][j]] == 1) {
                valid = 0;
                break;
            }
            seen[a[i][j]] = 1;
        }
    }

    
    for (j = 0; j < 9; j++) {
        int seen[10] = {0};

        for (i = 0; i < 9; i++) {
            if (a[i][j] < 1 || a[i][j] > 9 ||
                seen[a[i][j]] == 1) {
                valid = 0;
                break;
            }
            seen[a[i][j]] = 1;
        }
    }

   
    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            int seen[10] = {0};

            for (int r = i; r < i + 3; r++) {
                for (int c = j; c < j + 3; c++) {
                    if (a[r][c] < 1 || a[r][c] > 9 ||
                        seen[a[r][c]] == 1) {
                        valid = 0;
                        break;
                    }
                    seen[a[r][c]] = 1;
                }
            }
        }
    }

    if (valid)
        printf("Valid Sudoku Board");
    else
        printf("Invalid Sudoku Board");

    return 0;
}