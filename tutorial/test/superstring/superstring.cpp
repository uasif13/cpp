#include <iostream>
#include <string>
using namespace std;

class SuperString : public string{
    string text;
    public:
        SuperString(string str) {
            text = str;
        }
        void printString() const;
        SuperString * reverseString(SuperString*& new_string, const SuperString*& old_string);
};
// ^ Classes have semicolons at the end
void SuperString::printString() const{
    cout << this -> text << endl;
}

SuperString * SuperString::reverseString(SuperString*& new_string, const SuperString*& old_string) {
    int length = (*old_string).text.size();
    // cout << length << endl;
    for (int i = 1; i <= length; ++i) {
        (*new_string).text += (*old_string).text[length-i];
    }
    // cout << (*new_string).text << endl;
    return new_string;
}

int main() {
    SuperString a ("hello");
    const SuperString * a_pointer = &a;
    a.printString();
    // How do I change the type declarations for this pointer?
    // You cannot call a non-const method with a const object. 
    // You should consider all methods you write and declare const if that's what it is.
    (*a_pointer).printString();
    cout << a_pointer <<endl;
    SuperString * b;
    SuperString dummy ("");
    b = &dummy;
    b = (*b).reverseString(b,a_pointer);
    (*b).printString();
    return 0;
}