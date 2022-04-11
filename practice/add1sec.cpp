#include<iostream>

using namespace std;

class time
{
    private:
    int seconds;
    int minutes;
    int hours;
    public:
    time(int s,int m,int h)
    {
        seconds = s;minutes=m;hours=h;
    }
    void addseconds();
    void printDate();
};
void time :: addseconds()
{
    if (seconds == 59&&minutes<59)
    {
        seconds = 0;
        minutes+=1;
    }else if (minutes == 59&&seconds==59)
    {
        seconds =0;
        minutes =0;
        hours+=1;
    }else if (minutes<=59&&seconds<59)
    {
        seconds+= 1;
    }
}
void time::printDate()
{
    cout << hours << " : " << minutes << " : " << seconds;
}

int main ()
{int x, y ,z;
cout << "enter the time 's' 'm' 'h'"<<endl;
cin >> x >> y >> z;
    time t1(x,y,z);
    t1.addseconds();
    t1.printDate();
    return 0;
}