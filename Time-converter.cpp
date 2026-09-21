#include<iostream>
using namespace std;

class time
{
    int hours,minutes,seconds;

public:
    void secondstohours()
    {
        int sec;
        cout << "Enter Total Seconds : ";
        cin >> sec;

        hours = sec / 3600;
        sec = sec % 3600;
        minutes = sec / 60;
        seconds = sec % 60;

        cout << "Time = " << hours << " : " << minutes << " : " << seconds << endl;
    }

    void hourstoseconds()
    {
        cout << "Enter Hours : ";
        cin >> hours;

        cout << "Enter Minutes : ";
        cin >> minutes;

        cout << "Enter Seconds : ";
        cin >> seconds;

        int sec = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total Seconds : " << sec << endl;
    }
};

int main ()
{
    time t;
    int choice;

    cout << "1. Seconds to Hours " << endl;
    cout << "2. Hours to Seconds " << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    
    if (choice == 1)
    {
        t.secondstohours();
    }
    else if (choice == 2)
    {

        t.hourstoseconds();
    }
    else 
    {
        cout << "Invalid choice!";
    }
    return 0;
}