//Accept one Number and toggle first and
//last Return Modified number
#include<iostream>
using namespace std;
///////////////////////////////////
int OnBit(int iNo)
{
    int iMask = 0XF000000F;
    int iNum = 0;

    iNum = iNo ^ iMask;

    return iNum;
}
///////////////////////////////////
//              MAIN             //
///////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Entre Number : "<<endl;
    cin>>iValue;

    iRet = OnBit(iValue);
    cout<<"Modified Number is : "<<iRet;

    return 0;
}