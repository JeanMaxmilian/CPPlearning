#include <iostream>

int main(){

    int choice{};

    do{
        std::cout<<"\nThis is a dump game enter any number greater than 3 or less than 1 to quit\n";
        std::cout<<"If you enter any number between 1 to 3 the game will continue \n";
        std::cout<<"1) I want to see these sentence in repeat mode\n";
        std::cout<<"2) I am bored and ready to do anything to kill time\n";
        std::cout<<"3) I hate this game but I still want to play it cuz I got nothing to do.\n";
        std::cout<<"Your choice :";
        std::cin>>choice;
    }while(choice <= 3 && choice >= 1);

    return 0;
}