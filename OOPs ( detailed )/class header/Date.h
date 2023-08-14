#ifndef DATE_H
#define DATE_H

class Date{

private:
    int m_day;
    int m_month;
    int m_year;

public:
    Date(int day, int month, int year);

    void setDate(int day, int month, int year);

    int getYear() { return m_year; }
    int getMonth() { return m_month; }
    int getDay()  { return m_day; }

};

#endif