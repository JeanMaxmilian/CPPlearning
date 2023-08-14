#include <iostream>
#include "Date.h"

int main(){
    Date date(26,12,2003);
    std::cout<<"Day :"<<date.getDay()<<"\n";
    std::cout<<"Month :"<<date.getMonth()<<"\n";
    std::cout<<"Year :"<<date.getYear()<<"\n";
}