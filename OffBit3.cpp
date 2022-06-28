//Accept one number and position
//from and off that Bit
#include<iostream>
using namespace std;
/////////////////////////////////////
int OffBit(int iNo, int pos)
{
    int iMask = 0X00000001;
    int iNum = 0;

    iMask = iMask << (pos - 1);

    iNum = iNo & ~iMask;

    return  iNum;
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    int iValue = 0;
    int ipos = 0;
    int iRet = 0;

    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    cout<<"Enter position of bit : "<<endl;
    cin>>ipos;

    iRet = OffBit(iValue,ipos);

    cout<<"Modified Number is : "<<iRet;

    return 0;
}