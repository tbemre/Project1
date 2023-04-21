#include <stdio.h>
#include<stdlib.h>
#include "header.h"

int main()
{
    int size;
    printf("please enter the size of the matrix you want:\n");
    scanf("%d",&size);
    int arr[size][size];
    printf("please enter the elements of matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    if(check(size,arr)){
        printf("The determinate of the matrix you entered is: %d",determinant(size,&arr[0][0]));
    }
    printf("\n");
    return 0;
}