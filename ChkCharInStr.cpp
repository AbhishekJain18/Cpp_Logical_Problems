//Accept a string from user and character
//check it is present in it or not
#include<iostream>
using namespace std;
/////////////////////////////////////
bool ChkChar(char *str, char ch)
{
    bool bChk = false;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bChk = true;
            break;
        }
        str++;
    }
    return bChk;
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    char Arr[30];
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    cout<<"Enter character : ";
    cin>>cValue;

    bRet = ChkChar(Arr,cValue);
    if(bRet == true)
    {
        cout<<"Character Found";
    }
    else
    {
        cout<<"Character not Found";
    }
    return 0;
}