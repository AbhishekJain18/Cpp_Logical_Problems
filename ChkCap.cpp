//Accpet character from user and check wheather it is capital or not(A-Z)
#include<iostream>
using namespace std;
//////////////////////////////////////
bool ChkCapital(char ch)
{
    bool bChk = false;
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        cout<<"It is capital";
    }
    else
    {
        cout<<"It is not Capital";
    }

    return 0;
}