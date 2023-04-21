#include <stdio.h>
#include<stdlib.h>
#include "header.h"

void print_matrix(int *arr, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ", *(arr+(i*size+j)));
        }
        printf("\n");
    }
}

int check(int size, int arr[][size]){
    int row_zero, col_zero;
    for (int i=0;i<size;i++) {
        row_zero = 1;
        for (int j=0;j<size;j++) {
            if (arr[i][j] != 0) {
                row_zero = 0;
                break;
            }
        }
        if (row_zero==1) {
            printf("Row %d consists entirely of zero elements..\n", i+1);
            return 0;
        }
    }
    
    for (int j=0;j<size;j++) {
        col_zero = 1;
        for (int i=0;i<size;i++) {
            if (arr[i][j] != 0) {
                col_zero = 0;
                break;
            }
        }
        if (col_zero==1) {
            printf("Column %d consists entirely of zero elements..\n", j+1);
            return 0;
        }
    }
    if(size == 1 || size == 0){
         printf("Please enter a number between 2 and 5!\n");
         return 0;
    }
    return 1;
}


void cofactor(int size, int* arr, int *temp, int a, int b){
    int row_count = 0;
    for(int i=0;i<size;i++){
        if(i==a){
            continue;
        }
        int col_count = 0;
        for(int j=0;j<size;j++){
            if(j==b){
                continue;
            }
            *(temp+(row_count*(size-1))+col_count) = *(arr+(i*size)+j);
            col_count++;
        }
        row_count++;
    }
}

int determinant(int size, int *arr){
    int det=0;
    if (size==1) {
        return *arr;
    }
    else{
        int cof[size-1][size-1];
        int *cofac_matrix = &cof[0][0];
        for(int i = 0; i < size; i++){
            cofactor(size, arr, cofac_matrix, 0, i);
            det += (i % 2 == 0 ? 1 :-1) * (*(arr+i)) * determinant(size-1, cofac_matrix);
        }
    }
    return det;
}
