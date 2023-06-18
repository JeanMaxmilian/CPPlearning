//Local variables have no linkage
#include <iostream>

int main(){

    int x{5};
    std::cout<<"Value of x:"<<x<<"\n";

    {
        int x{3};// declaration allowed
        std::cout<<"Value of x:"<<x<<"\n";
    }
}