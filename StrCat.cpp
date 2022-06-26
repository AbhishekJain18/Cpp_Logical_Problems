//Accept 2 strings from user and concat 2nd
//string after first
#include<iostream>
using namespace std;
//////////////////////////////////////
void StrCatX(char *str, char *dest)
{
    while(*str != '\0')
    {
        str++;
    }
    *str = ' ';
    str++;
    while(*dest != '\0')
    {
        *str = *dest;
        dest++;
        str++;
    }
    *str = '\0';
}
//////////////////////////////////////
//             MAIN                 //
//////////////////////////////////////
int main()
{
    char Arr[50];
    char Brr[30];

    cout<<"Enter first string : ";
    cin.getline(Arr,50);

    cout<<"Enter Second string : ";
    cin.getline(Brr,30);

    StrCatX(Arr,Brr);

    cout<<Arr;

    return 0;
}