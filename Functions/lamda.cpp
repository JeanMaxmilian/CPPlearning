#include <iostream>

int getNumber(){

    int x;
    std::cout<<"Enter a number: ";
    std::cin>>x;
    std::cout<<"\n";

    return x;
}
int main() {
  int x {getNumber()};
  int y {getNumber()};

  // Lambda function
  auto sum = [](int a, int b) {
    return a + b;
  };

  int result = sum(x, y);
  std::cout << "Sum: " << result << std::endl;

  return 0;
}
