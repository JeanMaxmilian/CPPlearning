#include <iostream>

int add(int num1, int num2);

int initializer()
{
    int x{};
    std::cout<<"Enter a number:";
    std::cin>>x;
    return x;

}

int main()
{
  int num1{initializer()};
  int num2{initializer()};
  std::cout<<"sum of "<<num1<<" & "<<num2<<" is:"<<add(num1,num2);
  return 0;
}
