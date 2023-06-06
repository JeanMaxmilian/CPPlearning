#include <iostream>

int main(){

    char ch1{5}; // initialize with integer 5 (stored as integer 5)
    char ch2{'5'}; // initialize with code point for '5' (stored as integer 53)

    std::cout<<ch1<<'\n';
    std::cout<<ch2<<'\n';

    return 0;
}