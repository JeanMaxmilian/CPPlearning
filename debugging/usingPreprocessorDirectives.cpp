#include<iostream>

#define ENABLE_DEBUG

void getUserInput(){

    #ifdef ENABLE_DEBUG

    std::cout<<"getUserInput() called\n";

    #endif
}

int main(){

    #ifdef ENABLE_DEBUG

    std::cout<<"main() called\n";

    #endif

    getUserInput();

}