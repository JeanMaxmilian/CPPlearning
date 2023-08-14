#include <iostream>

class sample{

private:
    int m_num{};

public:

    sample(){
       std::cout<<"constructor called \n"; 
    }
    sample(int num): m_num {num} {
        std::cout<<"constructor called \n";
    }

    ~ sample(){
        std::cout<<"Destructor called \n";
    }
};

int main(){

    sample sample1;
    return 0;
}