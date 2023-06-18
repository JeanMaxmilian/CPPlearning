#include <iostream>

const double PI {3.14};
int g_x{12}; // non-constant global variable

void print(){

    
    std::cout<<"Value of g_x:"<<g_x<<"\n";
}
int main(){

    g_x = 45;//change is reflected throughout the program
    std::cout<<"Value of g_x:"<<g_x<<"\n";
    print();
    return 0;
}