#pragma once
#include <string>

using namespace std;


class Contract
{
public:
    const int minutesPerHour = 60;
    
    int x = 5, y = 12;
    int myNum = x + y;
    int myAge = 50;

    int mySum = myAge - myNum;
    string firstName;
    string lastName;
    

   void CalcStudyTime()
   {
       int minutesPerLunchBreak = 60, minutesPerShortBreak = 15;
    
       int minutesPerWorkDay = (minutesPerHour * 8) - (minutesPerShortBreak * 2) - minutesPerLunchBreak;
   }
    
    
};
