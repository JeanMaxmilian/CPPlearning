// program to check whether the compiler is configured correctly
//terminal-> configure tasks
//edit tasks.json set "-std=c++20" for c++ version 20
//termial->new terminal
//terminal->run task

#include <iostream>

int main(){

    auto result  = (10 <=> 20) > 0;
    std::cout<<result<<std::endl;
    return 0;
}