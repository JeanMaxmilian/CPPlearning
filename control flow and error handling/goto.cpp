#include <iostream>

int main(){

    int x{};

    loop:
        x++;
        if(x==10) return 0;
        
        std::cout<<x<<"\n";
    goto loop;

    return 0;
    
}