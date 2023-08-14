# Objects
---

## Declaring a variable and creating an object share some similarities in the sense that they both involve reserving memory space to hold data. However, there are fundamental differences between the two concepts.
---

 When you declare a variable, you are simply creating a named storage location to hold a value of a particular data type. For example, in languages like C or C++, you can declare an integer variable like this:

 ```cpp
 int num;
 ```

 when you create an object in object-oriented programming, you are instantiating a specific instance of a class. The object is an entity that combines data (state) and behavior (methods) based on the class blueprint.

 ```cpp
 class car{

    int m_x;

    public:
     void func(){

     }

 };
 
 int main(){

 Car myCar;
 }
 ```