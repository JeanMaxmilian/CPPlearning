#include <iostream>

enum Weekdays{ //unscoped enum

    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,

};
enum class Color //scoped enum
{
    black,
    red,
    blue,
};
int main(){

    

    Weekdays gym{wednesday};
    Color shirt {Color::blue};


}