#include <iostream>
//encapsulation is used to protect acessing of data
//data can be modified only using getters and setters(methods)
class employee{
private:

    std::string Name{};
    std::string Email{};
    int Salary{};
    int Age;

public:

    void setAge(int age){//setter
        if(age>=18) Age = age;

    }

    int getter(){
        return Age;
    }

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
        std::cout<<"Age-"<<Age<<std::endl;
    }

};

int main(){

    employee employee1 = employee("Max","abcd@gmail.com",50000, 25);;
    
    employee1.printDetails();

    employee1.setAge(19);
    employee1.printDetails();
}