#include <iostream>

int main(){

    bool b1{}; //initializes the value to false
    std::cout<<b1<<"\n";

    bool t{true};
    bool f{false};

    std::cout<<"True :"<<t<<"\n";
    std::cout<<"False :"<<f<<"\n\n";

    //getting input

    bool b2;
    std::cout<<"Enter a boolean value:";
    std::cin>>b2;
    std::cout<<"\nyou entered:"<<b2<<"\n";

    return 0;

}