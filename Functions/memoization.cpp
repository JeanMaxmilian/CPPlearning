#include <iostream>
#include <vector>

std::int64_t fibonacci(int n){

    static std::vector<std::int64_t> results{0,1};
    if(n < static_cast<int>(std::size(results))) return results[n];//checks if the value is already present

    else
    {   
        results.push_back(fibonacci(n-1) + fibonacci(n-2));//if not then push the value thorough recursion and return
        return results[n];
    } 

}

int main(){

    int n{},i{};
    std::cout<<"Enter the number of terms: ";
    std::cin>>n;

    while(i < n){
    std::cout<<fibonacci(i)<<" ";
    i++;
    }

}