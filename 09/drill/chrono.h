
namespace chrono
{

    enum class Month
    {
        jan = 1,
        feb,
        mar,
        apr,
        may,
        jun,
        jul,
        aug,
        sep,
        oct,
        nov,
        dec
    };

    class Date
    {
    public:
        Date(Month m, int Day, int Year);
        Date();

        //return func
        Month rmonth() {return month;}
        int rday() {return day;};
        int ryear() {return year;};


        // mutable func
        void add_month();
        void add_day();

    private:
        int year;
        Month month;
        int day;
    };
}