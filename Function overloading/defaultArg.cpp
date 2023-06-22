#include <iostream>
#include <string>

void print(std::string string)
{
    std::cout<<string<<"\n";
}

void print(char ch='w')
{
    std::cout<<ch<<"\n";
}

int main()
{
    print("Hello, world"); // resolves to print(std::string)
    print('a'); // resolves to print(char)
    print(); // resolves to print(char)

    return 0;
}