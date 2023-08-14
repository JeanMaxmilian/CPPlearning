#include <iostream>
#include <assert.h>

class Stack{

private:
    int m_arr[10]{};
    int m_size{};

public:
    void reset(){
        m_size = 0;
    }

    bool push(int value){

        if(m_size <= 10){
            m_arr[m_size] = value;
            m_size++;
        }
        else{
            return false;
        }
        return true;
    }

    void pop(){
        
        assert(m_size>0 && "nothing to pop , program exits with code 0");
        std::cout<<m_arr[m_size]<<"\n";
        m_size--;
    }

    void print(){

        for(int i{}; i<m_size; i++){
            std::cout<<m_arr[i]<<" ";
        }
        std::cout<<"\n";
    }

};


int main(){

    Stack stack;
    stack.push(5);
    stack.push(4);
    stack.push(9);
    stack.push(2);

    stack.print();

    stack.pop();
    stack.pop();
    stack.pop();
    
    stack.print();
    stack.reset();
    stack.print();

    stack.pop();
}