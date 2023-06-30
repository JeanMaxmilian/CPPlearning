#include <iostream>

int main(){

    int* ptr{new int{}};//dynamic allocation for interger type use pointer type as new returns address in heap

    *ptr = 5;
    std::cout<<*ptr<<"\n";//5
    std::cout<<ptr<<"\n";//allocatedd memory
    delete ptr;
    std::cout<<*ptr<<"\n";//random value since the value is no more
    std::cout<<ptr<<"\n";//allocated momory still exist but the memory is handled by os

    ptr = nullptr;//recommended after deleting each dynamically allocated memory
}