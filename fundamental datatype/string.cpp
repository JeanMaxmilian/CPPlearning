# include <iostream>
#include <string> // for using string
#include <string_view> // for using string_view

int main(){

    std::string s{"hello world!"};
    std::cout<<s<<"\n";

    std::string_view sv{"cpp programming"};
    std::cout<<sv<<"\n";

}