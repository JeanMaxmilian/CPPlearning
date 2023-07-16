#include <iostream>

void foo(){
    std::cout<<"HI\n";
}
int main(){

    void (*foo1)(){&foo};
    foo1();
}