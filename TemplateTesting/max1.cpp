#include "max1.hpp"
#include <iostream>
#include <string>

int main(){
    int i= 44;
    std::cout << "max(7, i): " <<::max(7,i)<<'\n';

    double f1 = 3.4;
    double f2 = -6.9;
    std::cout << "max(f1, f2): " <<::max(f1, f2)<<'\n';

    std::string s1 = "mathamatics";
    std::string s2 = "math";
    std::cout << "max(s1, s2): " << ::max(s1, s2)<<'\n';
    
}