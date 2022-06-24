//Accpet charcter form user and check wheather it is
//special symbol or not
#include<iostream>
using namespace std;
//////////////////////////////////////
bool ChkSpecial(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return false;
    }
    else
    {
        return true;
    }
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter the character : ";
    cin>>cValue;

    bRet = ChkSpecial(cValue);
    if(bRet == true)
    {
        cout<<"It Contains special character";
    }
    else
    {
        cout<<"It not Contains special character";
    }
    return 0;
}
