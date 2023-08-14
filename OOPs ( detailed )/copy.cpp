#include <iostream>

class Date{

private:
    int m_day{};
    int m_month{};
    int m_year{};

public:

    void setDate(int day, int month, int year){
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void copyFrom(Date& d){
        m_day = d.m_day;
        m_month = d.m_month;
        m_year = d.m_year;
    }

    void printDate(){

        std::cout<<m_day<<"/"<<m_month<<"/"<<m_year<<"\n";
    }

};

int main(){

    Date birthDay;
    birthDay.setDate(26,12,2003);
    birthDay.printDate();

    Date event;
    event.copyFrom(birthDay);
    event.printDate();


}