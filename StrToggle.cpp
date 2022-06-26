//Accept String from user and convert it into
//toggle case
#include<iostream>
using namespace std;
///////////////////////////////////////
void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
///////////////////////////////////////
//              MAIN                 //
///////////////////////////////////////
int main()
{
    char Arr[30];

    cout<<"Entre String : ";
    cin.getline(Arr,30);

    strtoggleX(Arr);

    cout<<"Modified string is : "<<Arr;

    return 0;
}