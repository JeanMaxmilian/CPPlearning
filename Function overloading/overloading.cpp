#include <iostream>

int add(int x, int y){

    return x+y;
}

double add(double x, double y){

    return x+y;
}

int main(){

    std::cout<<add(5,6)<<"\n";
    std::cout<<add(5.3,2.6)<<"\n";

}