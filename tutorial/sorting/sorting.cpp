#include <iostream>
#include "sorting.h"

int * insert_sort(int*& new_arr, const int*& old_arr, const int length) {
//     // Size of arr can be found with .size() - https://cplusplus.com/reference/array/array/size/
//     int * sorted = new int[arr.size()];
//     int index = 0;
//     for (int i = 0; i < arr.size(); ++i) {
//         sorted[index] = arr[i];
//         int j = 0;
//         while(j < index) {
//             if (sorted[j] > arr[i]) {
//                 swap(sorted,j,index);
//                 j = index;
//             }
//             else {
//                 j += 1;
//             }
//         }
//     }
//     return sorted;
}

void print_arr(int*& arr, const int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << *(arr+i) << " ";
    }    
}

const int get_length(const int *& arr) {
    int length = 0;
    while (arr+length != nullptr) {
        int a = *(arr+length);
        length += 1;
    }
    return length;
}


int main() {
    // Cannot use initializer list for pointers. 
    // Use new operator or other variable.
    const int foo[] = {1,3,2,5,4};
    const int * arr = foo;
    
    const int length = get_length(arr);
    int * sorted_arr;
    sorted_arr = insert_sort(sorted_arr, arr, length);
    print_arr(sorted_arr,length);
    return 0;
}