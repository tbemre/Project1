#ifndef DET_HEADER
#define DET_HEADER

int check(int size, int arr[][size]);

void print_matrix(int *arr, int size);

void cofactor(int size, int* arr, int *temp, int a, int b);

int determinant(int size, int *arr);


#endif