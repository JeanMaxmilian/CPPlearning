#include <iostream>

int main(){
    int x{5};
    int y{5};

    //int z = ++x + y++ ;

    //R->L evaluation 
    //      7   + 6  <--
    int a = ++x + x++;

    std::cout<<x<<std::endl;

    std::cout<<a;
}