//Check wheather 5th and 18 bit is on or off
#include<iostream>
using namespace std;
/////////////////////////////////////
bool ChkBit(int iNo)
{
    int iMask = 0X00020010;
    int iResult = 0;

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
//               MAIN              //
/////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        cout<<"5th and 18th bit is on";
    }
    else
    {
        cout<<"5th and 18th bit is off";
    }

    return 0;
}