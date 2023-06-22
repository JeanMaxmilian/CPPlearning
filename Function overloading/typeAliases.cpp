#include <iostream>

int main(){

    using newInt = int; //aliases
    typedef double doubledouble; //using typedef

    newInt x{5};
    doubledouble y{5};

    std::cout<<"int: "<<x<<"\n";
    std::cout<<"double: "<<y<<"\n";

}