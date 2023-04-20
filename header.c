#include <stdio.h>
#include<stdlib.h>
#include "header.h"
void print_array(int arr[],int size){
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void print_matrix(int *arr, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ", *(arr+(i*size+j)));
        }
        printf("\n");
    }
}
void cofactor(int size, int* arr, int *temp, int a, int b){
    int row_count = 0;
    for(int i = 0; i < size; i++){
        if(i == (a - 1)){
            continue;
        }
        int col_count = 0;
        for(int j = 0; j < size; j++){
            if(j == (b - 1)){
                continue;
            }
            *(temp + (row_count * (size - 1)) + col_count) = *(arr + (i * size) + j);
            col_count++;
        }
        row_count++;
    }
}

int determinant(int size, int *arr){
    int det=0;
    int sign = 1;
    if(size == 2){
        return (*(arr))*(*(arr+3))-(*(arr+1))*(*(arr+2));
    }
    else{
        int *cofac_matrix = malloc(sizeof(int) * (size - 1) * (size - 1));
        for(int i = 0; i < size; i++){
            cofactor(size, arr, cofac_matrix, 0, i);
            det += sign * (*(arr+i)) * determinant(size - 1, cofac_matrix);
            sign = -sign;
        }
        free(cofac_matrix);
    }
    return det;
}