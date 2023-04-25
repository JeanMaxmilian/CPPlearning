#include <iostream>

#define num 1

int main(){

    #ifdef num
    std::cout<<"num is defined\n";
    #endif

    std::cout<<"Value of num is:"<<num<<"\n";
    return 0;
}