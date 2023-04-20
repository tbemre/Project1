#ifndef DET_HEADER
#define DET_HEADER
void print_array(int *arr, int size);
void print_matrix(int *arr, int size);

void cofactor(int size, int* arr, int *temp, int a, int b);

int determinant(int size, int *arr);

int *new_matrix(int size, int *arr,int a,int b);
#endif