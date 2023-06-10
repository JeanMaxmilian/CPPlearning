#include <iostream>

int main(){

    int x{1},y{2};

    //input: x, y ->	Evaluate x then y, returns value of y
    std::cout<<(++x,++y)<<std::endl;
}