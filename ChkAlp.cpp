//Accept Character from user and chack wheather is it Alphabet or not (A-Z  a-z)
#include<iostream>
using namespace std;
/////////////////////////////////////////
bool ChkAlpha(char ch)
{
    bool bChk = false;
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        bChk = true;
    }
    return bChk;
}
/////////////////////////////////////////
//                 MAIN                //
/////////////////////////////////////////
int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter the character : ";
    cin>>cValue;

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        cout<<"It is Character";
    }
    else
    {
        cout<<"It is not a character";
    }

    return 0;
}