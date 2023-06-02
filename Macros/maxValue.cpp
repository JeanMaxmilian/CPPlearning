#include <iostream>

#define max(a,b) ((a>b)?a:b)

int initializer(){
    int x{};
    std::cout<<"\nEnter a number:";
    std::cin>>x;
    return x;
}

int main(){
    int a{initializer()};
    int b{initializer()};

    #ifdef max

    std::cout<<"\nMaximum of "<<a<<" and "<<b<<" is "<<max(a,b);

    #endif

    return 0;

}