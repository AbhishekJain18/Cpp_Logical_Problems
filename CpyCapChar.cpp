//Accept string and character from user
//copy only capital char
#include<iostream>
using namespace std;
/////////////////////////////////////
void StrCpyCap(char *str,char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    StrCpyCap(Arr,Brr);

    cout<<Brr;

    return 0;
}