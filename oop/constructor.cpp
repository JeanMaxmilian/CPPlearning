#include <iostream>

class employee{
public:
    std::string Name{};
    std::string Email{};
    int Salary{};

    employee(std::string name,std::string email,int salary){//constuctor

        Name = name;
        Email = email;
        Salary = salary;
    }

    void printDetails(){

        std::cout<<"Name-"<< Name<<std::endl;
        std::cout<<"Email-"<<Email <<std::endl;
        std::cout<<"Salary- rs."<<Salary <<std::endl;
    }

};

int main(){

    employee employee1 = employee("Max","abcd@gmail.com",50000 );
    employee1.printDetails();
}