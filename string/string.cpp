#include<iostream>
#include<string>
using namespace std;

int main()
{
    string greeting = "Hello";
    string complete_greating = greeting + " there";
    complete_greating += "!";
    //cout << greeting + " there" << endl;
    //cout << complete_greating<<endl;
    //cout << complete_greating.length() << endl;
    //method == member function == function attached to objects
    
    ///////////////////////////////////////////////////////////////////////////////
    string GREETING;
    cin>>GREETING;// its just for 1st word
    cout<<GREETING<<endl;
    return 0;
}