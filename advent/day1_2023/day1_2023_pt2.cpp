#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <map>
#include <iterator>
// cmath is for more complicated math operators like pow
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
    map<string,string> digits;
    digits["one"] = "1";
    digits["two"] = "2";
    digits["three"] = "3";
    digits["four"] = "4";
    digits["five"] = "5";
    digits["six"] = "6";
    digits["seven"] = "7";
    digits["eight"] = "8";
    digits["nine"] = "9";
    const int line_length = line.size();
    for (int i = 0; i < line_length; ++i) {
        // Digits
        if (line[i] >= lower && line[i] <= upper) {
            number += line[i];
        }
        // string digits
        else {
            for (map<string,string>::iterator it=digits.begin();it!= digits.end(); ++it) {
                const int length = (it->first).size();
                if (i+length <= line_length) {
                    // substr adds the length. it's not the two ends of the indices.
                    const string sub = line.substr(i,length);
                    if (sub.compare(it->first) == 0) {
                        number += it->second;
                    }
                }
            }
        }
    }
    // static_cast converts it to the ascii value
    num += (static_cast<int>(number[0])-48)*10;
    num += (static_cast<int>(number[number.size()-1])-48); 
    // method to convert string to number
    // const int nums = stoi(number);
    return num;

}