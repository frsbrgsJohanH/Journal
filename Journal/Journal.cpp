
#include <corecrt_wstdio.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    const float PI = 3.14;
    const int minutesPerHour = 60;

    int x = 5, y = 12;
    int myNum = x + y;
    int myAge = 50;

    int mySum = myAge - myNum;
    string firstName;
    string lastName;
    

   
    int minutesPerLunchBreak = 60, minutesPerShortBreak = 15;
    
    int minutesPerWorkDay = (minutesPerHour * 8) - (minutesPerShortBreak * 2) - minutesPerLunchBreak;

    cout << "Hello World \n" << "Im learning c++ today!\n"; 
    cout << endl;
    cout << "\nYour firstname? "; cin >> firstName;
    cout << "\nYour Lastname?"; cin >> lastName;
    string fullName = firstName + " " + lastName;
    cout << endl;
    cout << "Hello " << fullName << endl;
    cout << "Your age is " << mySum << endl;
    cout << "You will be coding for " << minutesPerWorkDay << " minutes, Every day!";
    cout << endl;
    
    

    return 0;
}
