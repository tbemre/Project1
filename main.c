#include <stdio.h>
#include "header.h"

int main()
{
    int arr[5][5]= {{1,2,3,4,1},{5,6,7,8,1},{9,10,11,12,1},{13,14,15,16,1},{17,18,19,20,1}};
    //print_array(new_matix(5,arr,2,2),16);
    print_matrix(new_matix(5,arr,2,2),4);
    return 0;
}