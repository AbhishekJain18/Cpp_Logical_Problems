//Accept one Number and position from user
//check that bit is on or off
#include<iostream>
using namespace std;
/////////////////////////////////////
bool ChkBit(int iNo, int pos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask << (pos - 1);

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    int iValue = 0;
    int ipos = 0;
    bool bRet = false;

    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    cout<<"Enter position of bit : "<<endl;
    cin>>ipos;

    bRet = ChkBit(iValue,ipos);

    if(bRet == true)
    {
        cout<<"Bit is on";
    }
    else
    {
        cout<<"Bit is off";
    }
    return 0;
}
