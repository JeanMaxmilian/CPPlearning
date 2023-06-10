#include <iostream>

bool isEven(int num){

    return ((num%2)==0) ? true : false ;

}

int main(){

    int num{};
    std::cout<<"\nEnter the number:";
    std::cin>>num;

    std::cout<<std::boolalpha;
    std::cout<<"\nis the number even? "<<isEven(num);

    return 0;
}