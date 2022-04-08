#include<iostream>
#include <string>

using namespace std;

void GetTheDATA(char*, int*, int);

int main()
{
    int s_numbers;
    char action_type,exit_char;
    bool exit_poin = true;
    while(exit_poin)
    {
        cout << "tedad danesh amozan ra vared konid"<<endl;
        cin >> s_numbers;
        int grades[s_numbers];
        char names[s_numbers];
        cout << "get the name and scors of students (i) " <<endl<<"avrage of the scors (a)"<<endl<<"max score (m)"<<endl<< "who have the lover score than the avrage(n)"<<endl<<"enter your chose pls :"<<endl;
        getchar();
        cin >> action_type;
        switch(action_type)
        {
            case 'i' :
            GetTheDATA(names , grades , s_numbers);
                break;
            case 'a' :
                break;
            case 'm' :
                break;
            case 'n' :
                break;
            default :
                cout << "invalid input" <<endl;
        }
        cout << "you want to exit ? n/y";
        cin >> exit_char;
        if(exit_char == 'y' || exit_char == 'Y')
        {
            exit_poin = false;
        }
    }
    return 0;
}

void GetTheDATA(char *x, int *y, int x_len)
{
    for(int i = 0; i < x_len; i++)
    {
        getchar();
        cout <<"Enter the student name"<<endl;
        cin >> x[i];
        cout <<"Enter the student grade"<<endl;
        cin >> y[i];
    }
}
