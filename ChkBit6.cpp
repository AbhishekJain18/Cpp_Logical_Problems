//Accept one Number and two positions from user
//and check wheather bit at first or second position is on or off
#include<iostream>
using namespace std;
/////////////////////////////////////
bool ChkBit(int iNo, int pos1, int pos2)
{
    int iMask1 = 0X00000001;
    int iMask2 = 0X00000001;

    iMask1 = iMask1 << (pos1 -1);
    iMask2 = iMask2 << (pos2 -1);

    if(
        (iNo & iMask1) == iMask1 ||
        (iNo & iMask2) == iMask2 ||
        (iNo & (iMask1 | iMask2 )) == (iMask1 | iMask2 )
    )
    {
        return true;
    }
    else
    {
        return false;
    }
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    int ivalue = 0;
    int pos1 = 0;
    int pos2 = 0;
    bool bRet = false;

    cout<<"Enter Number : ";
    cin>>ivalue;

    cout<<"Enter first position : ";
    cin>>pos1;

    cout<<"Enter second position : ";
    cin>>pos2;

    bRet = ChkBit(ivalue,pos1,pos2);
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