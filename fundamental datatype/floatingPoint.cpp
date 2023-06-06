#include <iostream>
#include <iomanip> // input/output manipulator std::setprecision()


int main(){

    float fValue{0.5};
    double dValue{21.0};
    long double ldValue{30.0};

    std::cout<<"float :"<<fValue<<std::endl;
    std::cout<<"double :"<<dValue<<std::endl;
    std::cout<<"long double :"<<ldValue<<std::endl;

    //without set precision

    std::cout<<"\n\nWithout setprecision()\n\n";

    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    std::cout<<"\nall values are restricted to 6 digits\n";

    //with setprecision

    std::cout<<"\n\nWith setprecision()\n\n";

    std::cout<<std::setprecision(12);

    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    //nan , inf

    std::cout<<"\n\ninf- infinty , nan- not a number\n\n";
    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n';



}