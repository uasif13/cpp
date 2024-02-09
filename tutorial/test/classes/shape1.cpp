    #include <iostream>
    #include <string>
    using namespace std;

    template <class T>
    class Shape {
        protected:
            string name;
        public:
            // Virtual method declaration: virtual type method() =0;
            string get_name() {
                return name;
            }
            virtual T area() =0;
            virtual T perimeter() =0;

    };

    template <class T>
    class Rectangle: public Shape{
        T length, width;
        public:
            Rectangle (T length, T width) {
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

    int main()  {
        Rectangle <int> a (3,4);

        return 0;
    }