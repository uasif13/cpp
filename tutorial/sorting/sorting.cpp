#include <iostream>
#include "sorting.h"

// const int get_length(const int *& arr);
int * sort(int * arr,int * sorted, const int length);
void print_arr(int* arr, const int length);

int main() {
    // Cannot use initializer list for pointers. 
    // Use new operator or other variable.
    const int length = 5;
    int a [length];
    int b [length] = {1,3,2,5,4};
    int *g;
    // Rest are zeros.
    int c [length] = {3,1,2};
    int d [length] = {};
    int e [] = {6,8,3,2,5};
    int f [] {6,5,3,4};
    int * sorted;
    // const int length = get_length(arr);
    g = sort(e, sorted, length);
    print_arr(g,length);
    return 0;
}

int* sort(int * arr,int * sorted, const int length) {
//     // Size of arr can be found with .size() - https://cplusplus.com/reference/array/array/size/
    // int * sorted = new int[arr.size()];
    // In gdb, use p * array@len to get the values of the array
    int j = 0;
    int min = INT16_MAX;
    int min_index = 0;
    while (j < length) {
        for (int i = 0; i < length; ++i) {
            if (arr[i] < min) {
                min = arr[i];
                min_index = i;
            }
        }
        sorted[j] = min;
        min = INT16_MAX;
        arr[min_index]=INT16_MAX;
        j += 1;
    }
    return sorted;
}

void print_arr(int* arr, const int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << *(arr+i) << " ";
    }
    std::cout << std::endl;    
}