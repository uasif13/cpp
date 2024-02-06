#include <iostream>
#include <string>
using namespace std;

string * reverse(string*& reverse, const string*& original) {
    // Arrow operator points to value at address
    // Both ways are equivalent. Don't forget the parenthesis around the dereference operator.
    // int length = original->size();
    int length = (*original).size();
    
    cout << reverse << endl;
    for (int i = 1; i <= length; ++i) {
        // Both ways are equivalent. One uses the at method and the other uses bracket operator.
        // https://cplusplus.com/reference/string/basic_string/
        // (*reverse) += (*original)[length - i];
        (*reverse) += original->at(length - i);
        cout << (*reverse) << endl;
    }
    return reverse;

}

int main() {
    // since strings are part of std lib, u must either include the namespace or add the appropriate scope
    // std::string s;
    string s = "hello";
    string u = s + "!";
    const string * t = &u;
    // It is not recommended to return the address of a local variable outside the function as it goes out of scope after the function returns.
    // In this case, both rev and dummy need to be declared and initialized in the main function.
    string * rev;
    string dummy = "";
    rev = &dummy;
    string * r = reverse(rev, t);
    // You must initialize to a variable of the same type when you declare a pointer.
    cout << "r: " << r << endl;
    cout << "*r: " << *r << endl;
    // string * r = reverse(t);
    // cout << "t (*s): " << t << endl;
    // cout << "s: " << s <<endl; 
    // cout << "u: " << u <<endl; 
    // cout << "r: " << r <<endl; 
    // cout << "*r: " << *r <<endl; 
    return 0;
}