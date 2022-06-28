//Accept one Number and range of positions from user
//toggel bits from that range
#include<iostream>
using namespace std;
///////////////////////////////////
int ToggleBitRange(int iNo, int iStart, int iEnd)
{
    int iMask = 0X00000001;
    iMask = iMask << (iStart-1);
    while(iStart != (iEnd+1))
    {
        iNo = iNo ^ iMask;
        iMask = iMask << 1;
        iStart++;
    }
    return iNo;
}
///////////////////////////////////
//              MAIN             //
///////////////////////////////////
int main()
{
    int ivalue = 0;
    int pos1 = 0;
    int pos2 = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>ivalue;

    cout<<"Enter first position : ";
    cin>>pos1;

    cout<<"Enter second position : ";
    cin>>pos2;

    iRet = ToggleBitRange(ivalue,pos1,pos2);
    cout<<iRet;
  
    return 0;
}