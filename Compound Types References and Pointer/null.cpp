#include <iostream>

int main(){

    int* ptr{};//null pointer
    std::cout<<ptr<<"\n";

    ptr = NULL;//null(old way)
    std::cout<<ptr<<"\n";

    ptr = nullptr;
    std::cout<<ptr<<"\n";

}