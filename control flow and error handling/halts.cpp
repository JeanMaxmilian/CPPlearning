#include <iostream>
void cleanup(){

    std::cout<<"variables cleaned\n";
}
int main(){

    int choice{};

    std::cout<<"How do you want to end this program,\n";
    std::cout<<"1) std::exit()\n";
    std::cout<<"2) std::atexit() , you can clean up the code\n";
    std::cout<<"3) std::abort()/std::terminate() \n";
    std::cin>>choice;

    switch (choice)
    {
    case 1:
        std::exit(0);
        break;
    case 2:
        std::atexit(cleanup);
        std::exit(0);
        break;
    case 3:
       std::abort(); //std::terminate will by default call abort
        break;
    
    default:
        break;
    }
}