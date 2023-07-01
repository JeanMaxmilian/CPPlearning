#include <iostream>

class car{
protected:
    std::string Brand;
public:
    car(std::string brand){
        Brand = brand;
    }
//Virtual Functions: A virtual function is a member function declared in the base class and overridden in the derived class.
//It allows the function to be dynamically bound at runtime based on the type of the object being referred to.
    virtual void drive(){
        std::cout<<"Driving the car"<<std::endl;
    }

};

class electricCar : public car{
public:
    int Price;

    electricCar(std::string brand,int price):car(brand){
        Price = price;
    }
    void charge(){
        std::cout<<"Use the charging plug to power your car"<<std::endl;
    }

    void drive(){
        std::cout<<"Driving the electric car"<<std::endl;
    }


};
int main(){

    electricCar e = electricCar("Tesla",5000000);
    e.drive();
    e.charge();

    car c1 = car("Tesla");
    c1.drive();

// Polymorphism allows you to treat objects of derived classes as objects of the base class.
    car* c2 = &e;
    c2->drive();
    
}