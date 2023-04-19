#include <stdio.h>
#include<stdlib.h>
#include "header.h"
void print_array(int *arr,int size){
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
int cofactor(){
    ;
}

int determinat(int size, int *arr){
    if(size == 2){
        return arr[0][0];
    }
}

int *new_matrix(int size, int arr[][size], int a, int b){
    int* arrPtr;
    int *matrix = (int *) calloc((size - 1) * (size - 1), sizeof(int));
    arrPtr = matrix;
    int row_count = 0;
    for(int i=0;i<size;i++){
        if(i == (a-1)){
            continue;
        }
        int col_count = 0;
        for(int j=0;j<size;j++){
            if(j == (b-1)){
                continue;
            }
            *(matrix+(row_count*(size-1))+col_count) = arr[i][j];
            col_count++;
        }
        row_count++;
    }
    return arrPtr;
}
void free_memory(void* ptr){
    free(ptr);
}