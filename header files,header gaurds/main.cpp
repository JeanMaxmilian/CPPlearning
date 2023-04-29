#include <iostream>
#include "gradeOneMath.h"

using namespace LLM;

int initializer(){
    int x;
    std::cout<<"\nEnter a number:";
    std::cin>>x;
    return x;
}


int main(){

    int a{initializer()};
    int b{initializer()};
    std::cout<<"\nAddition of the numbers:"<<add(a,b);
    std::cout<<"\nSubraction of the numbers:"<<subtract(a,b);
    std::cout<<"\nProduct of the numbers:"<<multiply(a,b);
    std::cout<<"\nquotient of the numbers:"<<divide(a,b);

    return 0;

}