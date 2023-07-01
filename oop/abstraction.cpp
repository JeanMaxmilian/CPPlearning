#include <iostream>
class abstractEmployee{

    virtual void askForPromotion() = 0 ;

};
class employee:abstractEmployee{
public:
    std::string Name{};
    std::string Email{};
    int Salary{};
    int Age;

    employee(std::string name,std::string email,int salary, int age){//constuctor

        Name = name;
        Email = email;
        Salary = salary;
        Age = age;
    }

    void printDetails(){

        std::cout<<"Name-"<< Name<<std::endl;
        std::cout<<"Email-"<<Email <<std::endl;
        std::cout<<"Salary- rs."<<Salary <<std::endl;
    }

    void askForPromotion(){
        if(Age>30)std::cout<<"Promotion granted"<<std::endl;
        else std::cout<<"Promotion denied"<<std::endl;
    }

};

int main(){

    employee employee1 = employee("Max","abcd@gmail.com",50000,25 );
    employee1.printDetails();

    employee1.askForPromotion();
}