//static variable will be declared once and gets out of scope only at the end of the program
#include <iostream>
void increment(){

    static int count =0;

    count++;
    std::cout<<"Count is: "<<count<<"\n";

}

int main(){

    increment();
    increment();
    increment();
}