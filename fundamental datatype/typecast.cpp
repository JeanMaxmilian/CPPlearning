#include <iostream>

int charAsInt(char c){

    return c;
}

int main(){
    
    int choice{};
    std::cout<<"which type of conversion you prefer:\n";
    std::cout<<"1. Implicit conversion\n";
    std::cout<<"2. Explicit coversion\n";

    std::cout<<"your choice (1/2):";
    std::cin>>choice;

    char c{};
    std::cout<<"\n\nEnter a character:";
    std::cin>>c;

    if(choice == 1){

        std::cout<<"\n\nImplicit conversion\n";
        std::cout<<"you entered "<< c <<",the ASCII value is "<<charAsInt(c)<<"\n";

    }
    else if(choice == 2){

        std::cout<<"\n\nExplicit coversion\n";
        std::cout<<"you entered "<< c <<",the ASCII value is "<<static_cast<int>(c)<<"\n";
    }
    else{
        std::cout<<"\noperation failed!!\n";
    }

}