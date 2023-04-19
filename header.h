#ifndef DET_HEADER
#define DET_HEADER
void print_array(int *arr, int size);
void print_matrix(int *arr, int size);

int cofactor();

int determinat(int size, int *arr);

int *new_matrix(int size, int *arr,int a,int b);
void free_memory(void* ptr);

#endif