//Accept a string from user and character
//return the frequency of it.
#include<iostream>
using namespace std;
/////////////////////////////////////
int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    cout<<"Enter character : ";
    cin>>cValue;

    iRet = CountChar(Arr,cValue);

    cout<<iRet;

    return 0;
}