//Accept division of strudents from user and depends on the division
//display exam timing.(Application should be case insensitive)
// Division         Time
//    A            7:00 AM
//    B            8:30 AM
//    C            9:30 AM
//    D           10:30 AM
#include<iostream>
using namespace std;
//////////////////////////////////////////
void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
        case ('A'):
            cout<<"Your Exam is at 7:00 AM";
            break;
        case ('a'):
            cout<<"Your Exam is at 7:00 AM";
            break;
        case ('B'):
            cout<<"Your Exam is at 8:30 AM";
            break;
        case ('b'):
            cout<<"Your Exam is at 8:30 AM";
            break;
        case ('C'):
            cout<<"Your Exam is at 9:30 AM";
            break;
        case ('c'):
            cout<<"Your Exam is at 8:30 AM";
            break;
        case ('D'):
            cout<<"Your Exam is at 10:30 AM";
            break;
        case ('d'):
            cout<<"Your Exam is at 8:30 AM";
            break;
        default :
            cout<<"Invalid Input";
    }
}
//////////////////////////////////////////
//                 MAIN                 //
//////////////////////////////////////////
int main()
{
    char cValue = '\0';

    cout<<"Enter your Division : ";
    cin>>cValue;

    DisplaySchedule(cValue);
    return 0;
}