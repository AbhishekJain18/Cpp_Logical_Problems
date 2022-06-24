//Accpet character from user and check wheather it is small case or not(A-Z)
#include<iostream>
using namespace std;
//////////////////////////////////////
bool ChkSmall(char ch)
{
    bool bChk = false;
    if(ch >= 'a' && ch <= 'z')
    {
        bChk = true;
    }
    return bChk;
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter the charcter :";
    cin>>cValue;

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        cout<<"It is small case charcter";
    }
    else
    {
        cout<<"It is not small case charcter";
    }

    return 0;
}