#include <stdio.h>
// Define the structure for sudoku
typedef struct sudoku {
    int grid[9][9]; // 9x9 grid for the sudoku puzzle
} sudoku;

int main() {
    // Create an instance of the sudoku structure
    sudoku puzzle = {
        .grid = {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9}
        }
    };

    // Print the sudoku puzzle
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", puzzle.grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}