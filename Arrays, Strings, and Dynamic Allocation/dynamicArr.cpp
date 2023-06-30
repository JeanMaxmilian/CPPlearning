#include <iostream>

int main(){

    int length;
    std::cout<<"Enter the length of array :";
    std::cin>>length;

    int* arr{new int[length]{}};

    for(int i{0}; i<length;i++){
        std::cout<<"\nEnter "<<i+1<<" element :";
        std::cin>>arr[i];
    }
    for(int i{0}; i<length;i++){
        std::cout<<arr[i]<<"\t";
    }

}