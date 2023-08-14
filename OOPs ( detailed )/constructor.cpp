#include <iostream>
#include <cassert>

class Fraction{
private:
    int m_numerator{};
    int m_denominator{};
public:
    Fraction(){
        m_numerator = 0;
        m_denominator = 1;
    }

    Fraction(int numerator, int denominator=1){
        assert(denominator > 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }

    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
};

int main(){

    Fraction twoThird{2,3};
    std::cout<<"Fraction :"<<twoThird.getNumerator()<<"/"<<twoThird.getDenominator();
    
}