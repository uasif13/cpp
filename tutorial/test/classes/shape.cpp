#include <iostream>
#include <string>
using namespace std;

class Shape{
    protected:
        string name;
    public:
        // Virtual method declaration: virtual type method() =0;
        string get_name() {
            return name;
        }
        virtual int area() =0;
        virtual int perimeter() =0;

};

class Rectangle: public Shape{
    int length, width;
    public:
        Rectangle (int length, int width) {
            // There is no super operator. You need to add the protected modifier to access members from parent classes.
            name = "rectangle";
            this->length = length;
            this->width = width;
        }
        int area() {
            return length*width;
        }
        int perimeter() {
            return 2*length+2*width;
        } 
};

class Square: public Rectangle{
    int side;
    public: 
        Square (int side) : Rectangle(side, side) {
            name = "square";
            this->side = side;
        }
        int area() {
            return Rectangle::area();
        };
        int perimemter() {
            return Rectangle::perimeter();
        }
};

int main(){
    Rectangle a (4,5);
    Square b (3);
    Shape * c = &a;
    cout << c ->area() << endl;
    cout << (*c).area() << endl;
    return 0;
}