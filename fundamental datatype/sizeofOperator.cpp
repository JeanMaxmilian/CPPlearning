// sizeof operator returns size of the data type or variable 

#include <iostream>

int main(){

    // character

    std::cout<<"Size of char :"<< sizeof(char) <<std::endl;
    std::cout<<"Size of wchar_t :"<< sizeof(wchar_t) <<std::endl;
    std::cout<<"Size of char16_t :"<< sizeof(char16_t) <<std::endl;
    std::cout<<"Size of char32_t :"<< sizeof(char32_t) <<std::endl;

    //bool

    std::cout<<"Size of bool :"<< sizeof(bool) <<std::endl;

    //interger

    std::cout<<"Size of short :"<< sizeof(short) <<std::endl;
    std::cout<<"Size of int :"<< sizeof(int) <<std::endl;
    std::cout<<"Size of long int:"<< sizeof(long int) <<std::endl;
    std::cout<<"Size of long long int:"<< sizeof(long long int) <<std::endl;

    //fractions or floating point numbers

    std::cout<<"Size of float :"<< sizeof(float) <<std::endl;
    std::cout<<"Size of double :"<< sizeof(double) <<std::endl;
    std::cout<<"Size of long double :"<< sizeof(long double) <<std::endl;

    return 0;
}