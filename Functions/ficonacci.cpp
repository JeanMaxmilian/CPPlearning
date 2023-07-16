#include <iostream>

int fibonacci(int n){

    if(n==0 || n==1) return n;

    else return fibonacci(n-1) + fibonacci(n-2);

}

int main(){

    int n{};
    std::cout<<"Enter the number of terms: ";
    std::cin>>n;

    std::cout<<fibonacci(n)<<"\n";

}