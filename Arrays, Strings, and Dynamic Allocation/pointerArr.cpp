#include <algorithm>
#include <iostream>
#include <iterator>

bool isVowel(char ch){

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return true;
    default:
        return false;
    }

}

int main(){

    char str[100]{};
    //std::cout<<str<<"\n";
    std::cout<<"Enter a string :";
    std::cin>>str;

    int choice{1};
    std::cout<<"\nMethods (1)count_if (2)pointer, your choice :";
    std::cin>>choice;


    if(choice == 1){
        auto numOfVowels{std::count_if(std::begin(str), std::end(str),isVowel)};

        std::cout<<"\n No of vowels in "<<str<<" is "<<numOfVowels;
    }

    else if(choice == 2){
        int arrayLength{ static_cast<int>(std::size(str)) };
        int numOfVowels{ 0 };

        for (char* ptr{ str }; ptr != (str + arrayLength); ++ptr)
        {
            if (isVowel(*ptr))
            {
                ++numOfVowels;
            }
        }
        std::cout<<"\n No of vowels in "<<str<<" is "<<numOfVowels;
    }

    else{
        std::cout<<"Invalid choice";
    }
}