//Accept one Number and position from user
//on that Bit. Return Modified number
#include<iostream>
using namespace std;
///////////////////////////////////
int OnBit(int iNo, int pos)
{
    int iMask = 0X00000001;
    int iNum = 0;

    iMask = iMask << (pos - 1);

    iNum = iNo | iMask;

    return iNum;
}
///////////////////////////////////
//              MAIN             //
///////////////////////////////////
int main()
{
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    cout<<"Entre Number : "<<endl;
    cin>>iValue;

    cout<<"Enter position of bit : "<<endl;
    cin>>iPos;

    iRet = OnBit(iValue,iPos);
    cout<<"Modified Number is : "<<iRet;

    return 0;
}