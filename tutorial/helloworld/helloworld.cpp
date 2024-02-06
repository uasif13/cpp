#include <iostream>
int main() {
    auto x = R"(Hello World!)";
    std::cout << x;
}
// Use the command 
// g++ -std=c++0x helloworld.cpp -o helloworld 
// to compile