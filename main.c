#include <stdio.h>
#include<stdlib.h>
#include "header.h"

int main()
{
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    //print_matrix(new_matrix(5,arr,2,2),4);
    int x = determinat(2,new_matrix(3,arr,1,1));
    printf("%d",x);
    return 0;
}