#include <iostream>
#include <vector>

void printStack(const std::vector<int>& stack){
    
    for(auto element : stack){

        std::cout<<element<<" ";
    }
    std::cout<< "\n(capacity " << stack.capacity() << " length " << stack.size()<<"\n";
}
int main(){

    std::vector<int> stack{1,2,3,4,5};
    stack.push_back(6);
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    return 0;
}