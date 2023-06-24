#include <iostream>

void getNumber(int& num){

    std::cout<<"\nEnter a number :";
    std::cin>>num;
  
}
void add5(int& x, int& y){
    x += 5;
    y += 5;
}
int main(){

    int x{};
    getNumber(x);
    int y{};
    getNumber(y);

    std::cout<<"\n"<<x<<" "<<y;

    add5(x,y);
    std::cout<<"\n"<<x<<" "<<y;
}