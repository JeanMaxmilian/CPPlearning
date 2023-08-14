#include "Date.h"

Date::Date(int day, int month, int year){
    setDate(day, month, year);
}

void Date::setDate(int day, int month, int year){
    m_day = day;
    m_month = month;
    m_year = year;
}