#include <iostream>

int main(){

     std::cout<<"\n\nuse std::boolalpha to print as true or false\n\n";

    bool b;

    std::cout<<std::boolalpha;
    std::cout<<"Enter a boolean value:";
    std::cin>>b;
    std::cout<<"\nyou entered:"<<b<<"\n";

    return 0;
}