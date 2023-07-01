#include <iostream>

class employee{
public:
    std::string Name{};
    std::string Email{};
    int Salary{};

    void printDetails(){

        std::cout<<"Name-"<< Name<<std::endl;
        std::cout<<"Email-"<<Email <<std::endl;
        std::cout<<"Salary- rs."<<Salary <<std::endl;
    }

};

int main(){

    employee employee1;
    employee1.Name = "Max";
    employee1.Email ="abcd@gmail.com";
    employee1.Salary = 50000;
    employee1.printDetails();
}