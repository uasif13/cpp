#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool is_valid_game(string line);

int main() {
    fstream input;
    string line;
    input.open("input.txt");
    int sum = 0;
    if (input.is_open()) {
        while (getline(input, line)) {
            if (is_valid_game(line)) {
                sum += 
            }
        }
    }
    return 0;
}

bool is_valid_game(string line) {
    
    return true;
}