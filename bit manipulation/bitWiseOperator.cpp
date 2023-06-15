#include <iostream>
#include <bitset>

int main(){
    std::bitset<4> x { 0b1100 };

    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 1) << "\n\n"; // shift left by 1, yielding 1000

    //shift assignment
    std::cout << (x >>= 1) << '\n'; // shift right by 1, yielding 0110 and assign x= 0110
    std::cout << (x <<= 1) << '\n'; // shift left by 1, yielding 1100 and assign x= 1100

    return 0;
}