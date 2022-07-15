#include "chrono.h"

namespace chrono
{
    // constructors
    Date::Date() : month(Month::jan), day(1), year(2000){};

    Date::Date(Month m, int Day, int Year) : month(m), day(Day), year(Year){};


    // member functions
    void Date::add_year()
    {
        year++;
    }

    Month operator++(Month &m)
    // prefix increment operator
    {
        m = (m == Month::dec) ? Month::jan : Month(int(m) + 1);
        return m;
    }

    void Date::add_month()
    {
        if(month == Month::dec)
            add_year();
        ++month;
    }

    void Date::add_day()
    {
        if (day == 31)
        {
            day = 1;
            if (month == chrono::Month::dec)
            {
                year++;
                month = chrono::Month::jan;
            }
            else
            {
                add_month();
            }
        }
        day++;
    }

};