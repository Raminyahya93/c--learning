#include<iostream>

using namespace std;

void input(int*, char**, int);
void maximom(int*, char**, int);
float average(int*, int);
void print_average(int* grades, char** names, int average, int length);

int main()
{
    int length;
    int* grades;
    int i;
    float final_average;
    char** names;
    cout << "pls enter students numbers"<<endl;
                cin >> length;
                if(!grades)
                {
                    for(i=0; i<length; i++)
                    {
                        delete [] names[i];
                    }
                    delete [] grades;
                }
                grades = new int[length];
                names = new char*[length];
                for(i = 0; i < length; i++)
                {
                    names[i] = new char[20];
                }
                input(grades,names,length);
    while(true)
    {
        
        cout << "pls choose one of these operator 'i' 'm' 'a' 'n'"<<endl;
        char op_ch;
        cin >> op_ch;
        switch(op_ch)
        {
            case 'i':
            cout << "pls enter students numbers"<<endl;
                cin >> length;
                if(!grades)
                {
                    for(i=0; i<length; i++)
                    {
                        delete [] names[i];
                    }
                    delete [] grades;
                }
                grades = new int[length];
                names = new char*[length];
                for(i = 0; i < length; i++)
                {
                    names[i] = new char[20];
                }
                input(grades,names,length);
                break;
            case 'm':
               maximom(grades,names,length);
                break;
            case 'a':
                cout << "average of the students grades = "<<average(grades,length)<<endl;
                break;
            case 'n':
                final_average = average(grades,length);
                print_average(grades,names,final_average,length);
                break;
            default:
                cout << "invalid input"<<endl;
        }
        
        cout << "do you want to continue???y/n"<<endl;
        char ch;
        cin >> ch;
        if(ch=='n')
            break;
    }
    return 0;
}

void input(int* grades, char** names, int length)
{
    
    for (int i = 0; i < (length); i++)
    {
        getchar();
        cout << "pls enter students " <<i+1 << " name and grade" <<endl;
        cin.getline(names[i],20);
        cin >> grades[i];
    }
}

void maximom(int* grades, char** names, int length)
{
    int i;int max;
    max = grades[0];
            for (i = 0; i <= length; i++)
            {
                if(grades[i]>max)
                {
                    max = grades[i];
                }
            }
            cout << "\nmaximum grade: " << max << "\n students name :"<<endl;
            for(i = 0; i <= length;i++)
            {
                if(grades[i]==max)
                {
                cout << names[i] << endl;
                }
            }
}

float average(int* grades, int length)
{
    float sum = 0;
    for(int i = 0; i <= length;i++)
    {
        sum += grades[i];
    }
    sum = sum / length;
    return sum;
}

void print_average(int* grades, char** names, int average, int length)
{
    cout<<" name of students who have lower grades than average :"<<endl;
    for(int i = 0; i <= length ; i++)
    {
        if(grades[i] < average)
        {
            cout << names[i] <<endl;
        }
    }
}
