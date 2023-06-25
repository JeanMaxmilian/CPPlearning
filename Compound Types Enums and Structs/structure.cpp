#include <iostream>

struct Fraction{
    int numerator {};
	int denominator {};
    char symbol = '/';
};

int getNumber(){

    int num;
    std::cout<<"\nEnter a number :";
    std::cin>>num;
    return num;
}

int main(){

    int x{getNumber()};
    int y{getNumber()};

    Fraction f{x,y};
    std::cout<<f.numerator<<f.symbol<<f.denominator;
}