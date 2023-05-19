#include <plog/Log.h> 
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInput(){

    PLOGD<<"getUserInput() called";
    std::cout<<"Enter a number:";
    int x{};
    std::cin>>x;
    return x;
}

int main(){

    plog::init(plog::debug, "Logfile.txt");

    PLOGD<<"main() called";

    int x{getUserInput()};
    std::cout<<"you entered:"<< x <<std::endl;

}