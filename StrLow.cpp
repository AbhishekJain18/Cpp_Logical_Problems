//Accept String from user and convert it into
//lower case
#include<iostream>
using namespace std;
///////////////////////////////////////
void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
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

    strlwrX(Arr);

    cout<<"Modified string is : "<<Arr;

    return 0;
}