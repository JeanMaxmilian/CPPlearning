#include <iostream>

class car{
protected:
    std::string Brand;
public:
    car(std::string brand){
        Brand = brand;
    }
    void drive(){
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


};
int main(){

    electricCar e = electricCar("Tesla",5000000);
    e.drive();
    e.charge();
    
}