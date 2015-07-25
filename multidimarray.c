#include <stdlib.h>
#include <stdio.h>



int main(void){
    int matrix[4][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}};
    int rows, cols;

    for(rows = 0; rows < 4;rows++) {
        for (cols = 0; cols < 3; cols++) {
            printf("%3d", matrix[rows][cols]);
        }
        printf("\n");
    }



}