#include <iostream>

using namespace std;
bool isLeapYear(int year)
{
    int r = year % 33;
    return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int daysOfMonth(int m,int y)
{
    if(m>1 && m<7)
    return 31;
    else if(m<12)
    return 30;
    else if (m == 12 && isLeapYear(y))
    return 30;
    else if (m == 12 && !isLeapYear(y))
    return 29;
    return 0;
}
class Date
{
    public:
    Date(int d, int m, int y);
    void setDate(int d, int m, int y);
    void printDate();
    void incOneDay();
    bool isGreater(Date d);
    bool isEqual(Date d);
    int getDifferance(Date d);
    private:
    int day;
    int month;
    int year;
};
 void Date::setDate(int d, int m, int y)
{
     if (y < 0 || m < 1 || m > 12 || d < 1 || d>daysOfMonth(m,y))
        {
            cout << "invalid input";
            abort();
        }
    day = d; month = m; year = y;
}
Date::Date(int d, int m, int y)
{
    setDate(d, m, y);
}
void Date::printDate()
{
    cout << day << '/' << month << '/' << year << endl;
}
void Date::incOneDay()
{
    day++;
    if(day>daysOfMonth(month,year))
        {
            day=1;
            month++;
            if(month>12)
                {
                month=1;
                year++;
                }
        }
}
bool Date::isGreater(Date d)
{
    bool result=0;
    if(year>d.year)
        result=1;
    else if (year==d.year)
        {
            if (month>d.month)
                result=1;
            else if (month==d.month)
                if(day>d.day)
                    result=1;
        }
    return result;
}
bool Date::isEqual(Date d)
{
    if((day==d.day) && (month==d.month) && (year==d.year))
        return 1;
    else
        return 0;
}

int Date::getDifferance(Date d)
{
    
    int diff=0;
    if(!isGreater(d))
        {
            int temp_d=day;
            int temp_m=month;
            int temp_y=year;
            while(! isEqual(d))
            {
                diff++;
                incOneDay();
            }
            day=temp_d;
            year=temp_y;
            month=temp_m;
        }
    else if(isGreater(d))
        {
            int temp_d=d.day;
            int temp_m=d.month;
            int temp_y=d.year;
            while(! isEqual(d))
            {
                diff++;
                d.incOneDay();
            }
            d.day=temp_d;
            d.year=temp_y;
            d.month=temp_m;
        }
return diff;
}


int main()
{
    int x,y,z,a,b,c;
    cout << "enter the 1st date"<<endl;
    cin >> x >> y >> z ;
    Date t1(x,y,z);
    cout << "enter the 2nd date"<<endl;
    cin >> a >> b >> c ;
    Date t2(a,b,c);
    cout << "the difrences of the dates is " <<t2.getDifferance(t1)<< " days!!!"<<endl;
    return 0;
}
