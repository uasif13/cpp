#include <iostream>
#include <string>


void print_arr(const int*& a) {
    // *a = 3;
    std::cout << "*a: " << *a << std::endl;
    std::cout << "a: " << a << std::endl;
    // for (int i = 0; i < arr.size(); ++i) {
    //     std::cout << arr[i];
    // }
}

int main() {
    // int[] arr = {1,2,3,4,5}
    int b = 1;
    const int * a = &b;
    b = 5;
    print_arr(a);
    std::cout << "b: " << b << std::endl;
    return 0;
}