#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,a,j;
    int p,x=0;
    cout << "jomeleye khod ra vared konid"<<endl;
    getline(std::cin,s);
    cout << "kalame morde nazar ra vared konid"<<endl;
    getline(std::cin,a);
    cout << "kalame jaygozin ra vared konid "<<endl;
    getline(std::cin,j);
    p = s.find(a);
    while(p !=string::npos)
    {
        s.replace(s.find(a, x), a.length() , j);
        p=s.find(a, p+j.length());
        x+=j.length();
    }
    cout <<s<<endl;
    return 0;
}