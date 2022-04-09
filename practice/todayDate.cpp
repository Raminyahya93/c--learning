#include <iostream>

using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    void setDate(int d, int m, int y);
    void printDate();
};
void Date::setDate(int d, int m, int y)
{
    if
    (
        y < 0 ||
        m < 1 || m > 12 ||
        d < 1 ||
        (m < 7 && d > 31) ||
        (m > 6 && d > 30)||
        (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 )) && (m == 12) && (d > 30)) ||
        (((y % 4 != 0 || y % 100 != 0) && (y % 400 != 0 )) && (m == 12) && (d > 29))
    )
    abort();
    day = d;
    month = m;
    year = y;
}
void Date::printDate()
{
    cout << day << " / " << month << " / " << year;
}

int main()
{
    int x,y,z;
    cout << "pls enter day / month / year" << endl;
    cin >> x >> y >> z;
    Date today;
    today.setDate(x,y,z);
    today.printDate();
    return 0;
}