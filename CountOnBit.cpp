//accept one number from user and count number of
//ON bits
#include<iostream>
using namespace std;
///////////////////////////////////
int CountOnBit(int iNo)
{
    int iCnt = 0;
    int iMask = 0X00000001;

    for(;iNo != 0; iNo = iNo >> 1)
    {
        if((iNo & iMask) == 1)
        {
            iCnt++;
        }
    }
    return iCnt;
}
///////////////////////////////////
//              MAIN             //
///////////////////////////////////
int main()
{
    int ivalue = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>ivalue;

    iRet = CountOnBit(ivalue);
    cout<<"Number of on bits are : "<<iRet;

    return 0;
}