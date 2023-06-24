#include <iostream>

const std::string& returnByReference(){

    const static std::string str{"Reference"};

    return str;
}

const std::string* returnByAddress(){

    const static std::string* str = new std::string {"Address"};
    return str;
}
int main(){

    std::cout<<"\n"<< returnByReference();
    std::cout<<"\n"<< *returnByAddress();

}