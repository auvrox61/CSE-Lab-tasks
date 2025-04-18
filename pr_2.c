#include<stdio.h>

#define ROWS 50
#define COLS 50

void colorFill(int grid[ROWS][COLS], int rows,
int cols, int row, int col, int startRow, int startCol, int
originalColor, int newColor){
    if(row<0||row>=rows||col<0||col>=cols){
        return;
    } if(grid[row][col]!=originalColor||grid[row][col]==newColor){
        return;
    }
    grid[row][col]=newColor;
    colorFill(grid,rows,cols,row+1,col,startRow,startCol,originalColor,newColor);
    colorFill(grid,rows,cols,row-1,col,startRow,startCol,originalColor,newColor);
    colorFill(grid,rows,cols,row,col-1,startRow,startCol,originalColor,newColor);
    colorFill(grid,rows,cols,row,col+1,startRow,startCol,originalColor,newColor);
}

int main(){
    int rows,cols;
    int grid[ROWS][COLS];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    int startRow,startCol,newColor;
    scanf("%d %d %d",&startRow,&startCol,&newColor);
    int originalColor=grid[startRow][startCol];
    colorFill(grid,rows,cols,startRow,startCol,originalColor,newColor);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}