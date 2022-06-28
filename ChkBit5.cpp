//Accept one number from user and check
//wheather 9th or 12 th bit is on or off
#include<iostream>
using namespace std;
/////////////////////////////////////////
bool ChkBit(int iNo)
{
    int iMask = 0X00000900;

    if(
        ((iNo & iMask) == 0X00000100) ||
        ((iNo & iMask) == 0X00000800) ||
        ((iNo & iMask) == 0X00000900)
    )
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////
//                MAIN                 //
/////////////////////////////////////////
int main()
{
    int ivalue = 0;
    bool bRet = false;

    cout<<"Enter Number : ";
    cin>>ivalue;

    bRet = ChkBit(ivalue);
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
