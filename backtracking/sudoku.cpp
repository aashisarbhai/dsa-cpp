#include<iostream>
using namespace std;

void printSudoku(int sudoku[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int sudoku[9][9],int row,int col,int digit){
    //vertical
    for(int i=0;i<=8;i++){
        if(sudoku[i][col]==digit) return false;
    }
    //horizontal
    for(int j=0;j<=8;j++){
        if(sudoku[row][j]==digit) return false;
    }
    //grid
    int sR=(row/3)*3;
    int sC=(col/3)*3;

    for(int i=sR;i<=sR+2;i++){
        for(int j=sC;j<=sC+2;j++){
            if(sudoku[i][j]==digit) return false;
        }
    }
    return true;
}

bool sudokuSolver(int sudoku[9][9],int row,int col){
    if(row==9){
        //sudoku solve
        printSudoku(sudoku);
        return true;
    }

    int nextRow=row;
    int nextCol=col+1;

    if(col+1==9){
        nextRow=row+1;
        nextCol=0;
    }

    if(sudoku[row][col]!=0){
        return sudokuSolver(sudoku,nextRow,nextCol);
    }

    for(int dig=1;dig<=9;dig++){
        if(isSafe(sudoku,row,col,dig)){
            sudoku[row][col]=dig;
            if(sudokuSolver(sudoku,nextRow,nextCol)){
                return true;
            }
            sudoku[row][col]=0;
        }
    }
    return false;
}

int main(){
    int sudoku[9][9]={{ 5 , 3 ,  0 ,  0 , 7 ,  0 ,  0 ,  0 ,  0 },{ 6 ,  0 ,  0 , 1 , 9 , 5 ,  0 ,  0 ,  0 },{  0 , 9 , 8 ,  0 ,  0 ,  0 ,  0 , 6 ,  0 },{ 8 ,  0 ,  0 ,  0 , 6 ,  0 ,  0 ,  0 , 3 },{ 4 ,  0 ,  0 , 8 ,  0 , 3 ,  0 ,  0 , 1 },{ 7 ,  0 ,  0 ,  0 , 2 ,  0 ,  0 ,  0 , 6 },{  0 , 6 ,  0 ,  0 ,  0 ,  0 , 2 , 8 ,  0 },{  0 ,  0 ,  0 , 4 , 1 , 9 ,  0 ,  0 , 5 },{  0 ,  0 ,  0 ,  0 , 8 ,  0 ,  0 , 7 , 9 }};
    
    sudokuSolver(sudoku,0,0);

    return 0;
}