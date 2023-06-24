#include <iostream>

void passByAddress(std::string* str){

    *str = "TEXT CHANGED";
     str = nullptr;//parameter value is changed, not the actual pointer

}
int main(){

   std::string s1{"Original text"};
   std::cout<<s1<<"\n";
   
   std::string* sptr{&s1};
   std::cout<<"pointer is:"<<((sptr)?"not-null":"null")<<"\n";//not-null

   passByAddress(sptr);
   std::cout<<"pointer is:"<<((sptr)?"not-null":"null")<<"\n";//since only argument value is changed,it prints not-null
   std::cout<<s1<<"\n";
}