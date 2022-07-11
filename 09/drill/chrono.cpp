#include "chrono.h"

namespace chrono {
    void add_month()
    {
        
    }

    void Date::add_day()
    {
        if(day == 31)
        {
            day = 1;
            if(month == chrono::Month::dec)
            {
                year++;
                month = chrono::Month::jan;
            } else 
            {
                month = month + 1;
            }
        }
        day++;
    }
};