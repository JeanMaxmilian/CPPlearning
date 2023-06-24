#include <iostream>

int main(){

    int x{5};
    int& ref1{x};//Reference to variable x, different from pointer.
    int& ref2{ref1};//This is not a reference to reference, since ref1 references x and ref2 references ref1
                    //ref2 is referencing to x

    std::cout<<x<<" "<<ref1<<" "<<ref2<<"\n";

    x = 7;
    std::cout<<x<<" "<<ref1<<" "<<ref2<<"\n";

    ref1 = 10;
    std::cout<<x<<" "<<ref1<<" "<<ref2<<"\n";

    ref2 = 12;
    std::cout<<x<<" "<<ref1<<" "<<ref2<<"\n";

}