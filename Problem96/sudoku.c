#include <stdio.h>
#include <stdlib.h>



struct sudoku{
    int box[9][9];
} ;
typedef struct sudoku Sudoku;

int* valid_entries(Sudoku*,int ,int);
int* valid_entries(Sudoku* sudoku,int m ,int n){
    
    int row,column;
    if(m/3 == 0){
        row = 1;
    }
    else{
        if(m/3 == 1){
            row = 4;
        }
        else{
            row = 7;
        }
    }
    if(n/3 == 0){
        column = 1;
    }
    else{
        if(n/3 == 1){
            column = 4;
        }
        else{
            column = 7;
        }
    }
    int hash[9] = {0,0,0,0,0,0,0,0,0};
    for(int i = 0;i < 9;i++){
        if( (sudoku->box)[i][n] != 0){
            hash[(sudoku->box)[i][n] - 1] = 1;
        }
    }
    for(int j = 0;j < 9;j++){
        if( (sudoku->box)[m][j] != 0){
            hash[(sudoku->box)[m][j] - 1] = 1;
        }
    }
    if((sudoku->box)[row][column] != 0){
        hash[(sudoku->box)[row][column] - 1] = 1;
    }
    if((sudoku->box)[row+1][column] != 0){
        hash[(sudoku->box)[row+1][column] - 1] = 1;
    }
    if((sudoku->box)[row][column+1] != 0){
        hash[(sudoku->box)[row][column+1] - 1] = 1;
    }
    if((sudoku->box)[row-1][column] != 0){
        hash[(sudoku->box)[row-1][column] - 1] = 1;
    }
    if((sudoku->box)[row][column-1] != 0){
        hash[(sudoku->box)[row][column-1] - 1] = 1;
    }
    if((sudoku->box)[row+1][column-1] != 0){
        hash[(sudoku->box)[row+1][column-1] - 1] = 1;
    }
    if((sudoku->box)[row-1][column+1] != 0){
        hash[(sudoku->box)[row-1][column+1] - 1] = 1;
    }
    if((sudoku->box)[row-1][column-1] != 0){
        hash[(sudoku->box)[row-1][column-1] - 1] = 1;
    }
    if((sudoku->box)[row+1][column+1] != 0){
        hash[(sudoku->box)[row+1][column+1] - 1] = 1;
    }
    int length = 0;
    for(int index = 0;index<9;index++){
        if(hash[index] == 1){
            length++;
        }
    }
    (sudoku->box)[m][n] = length;
    int *result = (int*)malloc(length * sizeof(int));;
    int start = 0;
    for(int index = 0;index<9;index++){
        if(hash[index] == 1){
            result[start++] = index +1;
        }
    }

    return result;




}

void main(){
    Sudoku puzzle = {
        {
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
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", puzzle.box[i][j]);
        }
        printf("\n");
    }
    int *result;
    int x=5,y=4;
    result = valid_entries(&puzzle , x,y );
    int n = puzzle.box[x][y];
    puzzle.box[x][y] = 0;
    for(int i = 0 ; i < n ; i++){
        printf("%d ",result[i]);
    }
    printf("\n");



}