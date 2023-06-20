#include <iostream>

void choice(int x){
    switch (x)
    {
    case 1:
        std::cout<<"\nyou won a lottery!";
        break;
    case 2:
        std::cout<<"\nyou won 1 dollar!";
        break;
    case 3:
        std::cout<<"\nyou lose , best luck next time!";
        [[fallthrough]]; // intentional fallthrough(similar to writing without break) 
                         //-- note the semicolon to indicate the null statement
    case 'a':
        std::cout<<"\nyou're a joker!";
      
    case 'b':
        std::cout<<"\nI mean no disrepect, but you deserve it!";
       
    default:
        break;
    }
}
int main(){

    int x{};
    std::cout<<"Enter a number to check your luck (1,2,3) :";
    std::cin>>x;

    choice(x);

}