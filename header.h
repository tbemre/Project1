#ifndef DET_HEADER
#define DET_HEADER
void print_array(int *arr, int size);
void print_matrix(int *arr, int size);

int cofactor();

int determinat(int row,int column, int arr[][column]);

int *new_matix(int size, int arr[][size],int a,int b);


#endif