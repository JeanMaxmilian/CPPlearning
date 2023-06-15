#include <iostream>
#include <bitset> 

int main(){

    std::bitset<8> myBitSet{0b0000'1110}; //declare 8-bit room size for 8 flags

    std::cout<<"value before flip:"<<myBitSet<<"\n";

    myBitSet.flip();
    std::cout<<"value after flip:"<<myBitSet<<"\n";

    myBitSet.set(3);
    std::cout<<"value after set position-3:"<<myBitSet<<"\n";

    myBitSet.reset(3);
    std::cout<<"value after reset position-3:"<<myBitSet<<"\n";
}