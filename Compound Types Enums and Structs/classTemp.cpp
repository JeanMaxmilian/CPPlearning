#include <iostream>
#include <utility> // for std::pair

template <typename T, typename U>
struct number{

    T num1{};
    U num2{};
};

template <typename T, typename U>
auto add(T num1,U num2){

    return num1 + num2;
}

template <typename T>
auto add(T num){

    return num.first + num.second;
}

int main(){

    std::pair<int,double> n{15,17.5};
    std::cout<<n.first;
    std::cout<<"\n"<<add<std::pair<int,double>>(n);

    number<int, double> n1{5,7.6};
    std::cout<<"\n"<<add<int,double>(n1.num1,n1.num2);

}