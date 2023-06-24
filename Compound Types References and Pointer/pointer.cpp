#include <iostream>

int main(){

    int value{5};
    std::cout<<value<<"\n"; //prints value in value
    std::cout<<&value<<"\n";//print address of value
    
    int* ptr{&value}; //Pointer to value
    std::cout<<ptr<<"\n";//prints address hold by ptr
    std::cout<<&ptr<<"\n";//address of ptr
    std::cout<<*ptr<<"\n";//value pointed by address in ptr
}