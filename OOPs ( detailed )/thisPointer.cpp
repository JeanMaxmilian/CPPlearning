#include <iostream>

//The this pointer allows you to access the members (variables and functions) of the current instance of the class.

class Sample{

private:
    int value{5};

public:
    void setValue(int value){
       std::cout<<this->value<<"\n";
       std::cout<<value<<"\n";
    }
};

int main(){

    Sample s;
    s.setValue(12);
}