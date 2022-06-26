//Accept the string from user and
//display only digits
#include<iostream>
using namespace std;
//////////////////////////////////////
void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            cout<<*str;
        }
        str++;
    }
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    char Arr[30];

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    DisplayDigit(Arr);
    
    return 0;
}
