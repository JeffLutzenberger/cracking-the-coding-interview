#include <stdio.h>
#include <string.h>

void zero_row_col(int mat[4][5]) {

    int zero_rows[4] = {0};
    int zero_cols[5] = {0};
    for(int i = 0; i < 4; i++) {
        printf("\n");
        for(int j = 0; j < 5; j++){
            printf("%i ", mat[i][j]);
            if (mat[i][j] == 0) {
                zero_rows[i] = 1;
                zero_cols[j] = 1;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++){
            if (zero_rows[i] == 1 || zero_cols[j] == 1) mat[i][j] = 0;
        }
    }
   
    printf("\n\nzeroed"); 
    for(int i = 0; i < 4; i++) {
        printf("\n");
        for(int j = 0; j < 5; j++){
            printf("%i ", mat[i][j]);
        }
    }
}

int main() {

    int mat[4][5] = {
        {0,1,1,1,1},
        {1,1,1,1,1},
        {1,1,1,0,1},
        {1,1,1,1,1}};

    zero_row_col(mat);

    return 1;
}
