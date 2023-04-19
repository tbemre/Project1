#include <stdio.h>
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

int determinat(int row,int column, int arr[][column]){
    ;
}

int *new_matix(int size, int arr[][size],int a, int b){
    int* arrPtr;
    int new_arr[size-1][size-1];
    int row = 0,column = 0, temp_value = 0;
    arrPtr = &new_arr[0][0];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i == (a-1)){
                continue;
            }
            if(j == (b-1)){
                continue;
            }
            new_arr[row][column++] = arr[i][j];
            if(column == size-1){
                row++;
                column =0;
            }
        }
    }
    return arrPtr;
}