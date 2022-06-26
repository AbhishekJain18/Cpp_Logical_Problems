//Accept String from user and convert it into
//upper case
#include<iostream>
using namespace std;
///////////////////////////////////////
void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprX(Arr);

    cout<<"Modified string is : "<<Arr;

    return 0;
}