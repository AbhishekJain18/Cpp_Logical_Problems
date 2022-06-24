//Accept character form user and check wheather it is digit or not
#include<iostream>
using namespace std;
//////////////////////////////////////
bool ChkDigit(char ch)
{
    bool bChk = false;
    if(ch >= '0' && ch <= '9')
    {
        bChk = true;
    }
    return bChk;
}

//////////////////////////////////////
//               MAIN               //
//////////////////////////////////////
int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter the charcter :";
    cin>>cValue;

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        cout<<"It is Digit";
    }
    else
    {
        cout<<"It is not Digit";
    }
    return 0;
}