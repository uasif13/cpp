int sum(int*& arr, const int arr_length) {
    int sum = 0;
    // range based fors require .begin function which are in arrays and strings
    for (int i=0; i < arr_length; ++i) {
        // Use *(arr+i). *(arr)[i] does not work. 
        // Think of an array as a continuous group of the data type.
        sum += *(arr+i);
    }
    return sum;
}

int * reverse(int*& new_arr, int*& old_arr, const int arr_length) {
    for (int i = 0; i < arr_length; ++i) {
        *(new_arr+i) = *(old_arr+arr_length-1-i);
    }
    return new_arr;
}

int main() {
    const int arr_length = 5;
    int * a;
    a = new int[arr_length];
    for (int i = 0; i < arr_length; ++i) {
        a[i] = i;
    }

    int b = sum(a,arr_length);
    int * c;
    c = new int[arr_length];
    c = reverse(c,a,arr_length);

    return 0;
}