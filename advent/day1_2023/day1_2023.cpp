#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

// fstream is a library to both read and write from files
using namespace std;
int get_number(string line);

int main() {
    fstream input;
    // default mode is both in and out
    input.open("input.txt");
    // Checks to see if the file is open
    // similar to the with block in python
    int sum = 0;
    string line;
    if (input.is_open()) {
        while (getline(input,line)) {
            sum += get_number(line);
        }
    }
    cout << sum;
    return 0;
}

int get_number(string line) {
    string number;
    int num =0;
    const char lower {'0'};
    const char upper {'9'};
    for (int i = 0; i < line.size(); ++i) {
        // Character comparisons?

        if (line[i] >= lower && line[i] <= upper) {
            number += line[i];
        }
    }
    // string to int casting?
    // static cast is best for conversion between fundamental data types: characters, integers, floats, booleans, void, and null pointer    
    // no static_cast for string -> number
    // static_cast converts it to the ascii value
    num += (static_cast<int>(number[0])-48)*10;
    num += (static_cast<int>(number[number.size()-1])-48); 
    // method to convert string to number
    const int nums = stoi(number);
    // const int nums1 = atoi(number[0]);
    // num = atoi(number[0])*10+atoi(number[number.size()-1]);
    return num;

}