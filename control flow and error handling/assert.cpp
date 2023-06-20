#include <iostream>
#include <cassert> // for assert 

int division(int x, int y){

    assert( (y>0) && "can't divide by zero");

    return static_cast<double> (x) / y;

}
int main(){

    std::cout<<division(5,0);
}