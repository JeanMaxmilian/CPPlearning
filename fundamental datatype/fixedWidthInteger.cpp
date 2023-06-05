#include <iostream>
#include <cstdint>

int main(){
    std::cout<<"sizeof int8_t :"<<sizeof(std::int8_t)<<std::endl;

    std::int32_t num{};
    num = 56;
    std::cout<<"sizeof num (int32_t):"<<sizeof(num)<<std::endl;
    return 0;
}