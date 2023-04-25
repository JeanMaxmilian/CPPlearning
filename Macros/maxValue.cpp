#include <iostream>

#define max(a,b) ((a>b)?a:b)

int intitializer(){
    int x;
    std::cout<<"\nEnter a number:";
    std::cin>>x;
    return x;
}

int main(){
    int a{intitializer()};
    int b{intitializer()};

    #ifdef max

    std::cout<<"\nMaximum of "<<a<<" and "<<b<<" is "<<max(a,b);

    #endif

    return 0;

}