#include<iostream>
#include<string>

using namespace std;

int main()
{
    int p1,p2;
    cout << "enter your sentence pls"<<endl;
    string s,a="four",x = " ";
    getline(std::cin, s);
    s.insert(0, x);
    s+=" ";
    p1 = s.find(" ");
    p2 = s.find(" ", p1+1);
    while(p2 != string::npos)
    {
        if(p2 - p1 == 5)
        {
            s.replace(p1+1,4 , a);
        }else{}
        p1 = p2;
        p2 = s.find(" ",p1+1);
    }
    cout << s << endl;
    return 0;
}