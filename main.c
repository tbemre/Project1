#include <stdio.h>
#include<stdlib.h>
#include "header.h"

int main()
{
    int *ptr;
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    ptr = &arr[0][0];
    print_matrix(new_matrix(3,ptr,2,2),2);
    int x = determinat(2,new_matrix(3,ptr,2,2));
    printf("%d",x);
    return 0;
}