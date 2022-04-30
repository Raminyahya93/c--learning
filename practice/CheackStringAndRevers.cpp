#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string s;
    int j = 0,i;
    getline(std::cin, s);
    for(i = s.length()-1;i > 0;i--)
    {
       if(s[i] != s[j])
       {
           cout << "no";
           return 0;
       }
        j++;
    }
    cout << "yes";
    return 0;
}