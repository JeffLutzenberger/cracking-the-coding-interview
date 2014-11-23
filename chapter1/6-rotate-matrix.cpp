#include <stdio.h>
#include <string.h>

void rotate_matrix(int mat[][4], int n) 
{
    //normal row/col eq: col + row * n
    //rotated 90 right eg: n * n - n * col - n + row

    int first = mat[0][0];

    int arr[16] = {0};
    for(int i = 0; i < n; i++) {
        printf("\n");
        for(int j = 0; j < n; j++) {
            printf("%i ", mat[i][j]);
            arr[j + i * 4] = mat[i][j];
        }
    }
    printf("\n");

    int mat2 [4][4] = {{0}};
    
    for(int i = 0; i < n; i++) {
        printf("\n");
        for(int j = 0; j < n; j++) {
            mat2[i][j] = arr[n * n - n * j - n + i];
            printf("%i ", mat2[i][j]);
        }
    }
    printf("\n");
}

void rotate_in_place(int mat[][4], int n) {
    printf("\nIn Place\n");
    //reverse rows
    for(int i = 0; i < (int)(n * 0.5); i++ ) {
        for(int j = 0; j < n; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[n-i-1][j];
            mat[n-i-1][j] = temp;
        }
    }
    //now transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("\n");
        for(int j = 0; j < n; j++) 
            printf("%i ", mat[i][j]);
    }
    printf("\n");
}
int main() 
{
    int mat[][4] = {
        {0,1,2,3}, 
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14,15}};

    rotate_matrix(mat, 4);

    rotate_in_place(mat, 4);
    return 1;
}
