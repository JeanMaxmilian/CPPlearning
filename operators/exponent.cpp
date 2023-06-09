#include <iostream>
#include <cstdint>
#include <cassert>

std::int64_t powint(std::int64_t base, int exp){

    assert(exp >=0);

    std::int64_t result {1};
    while (exp)
	{
        if(exp & 1)
            result *= base;
        exp >>=1;
        base *= base;
    }

    return result;
}


int main(){

    int base{};
    std::cout<<"\nEnter the base:";
    std::cin>>base;

    int exponent{};
    std::cout<<"\nEnter the exponent:";
    std::cin>>exponent;

    std::cout<<"\nAnswer:"<<powint(base,exponent);
}