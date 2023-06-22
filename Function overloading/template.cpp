#include <iostream>

template<typename T>
T max(T x, T y){

    return ((x > y)? x:y);
}
int main(){

   std::cout<<max<int>(3,2)<<"\n";
   return 0; 
}