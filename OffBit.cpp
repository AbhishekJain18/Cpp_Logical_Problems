//Accepts a number from user and off 7th bit of that if it is on
//Modifie the number
#include<iostream>
using namespace std;
/////////////////////////////////////
int OffBit(int iNo)
{
    int iMask = 0XFFFFFFBF;
    int iNum = 0;

    iNum = iNo & iMask;

    return iNum;
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Modified Number is : "<<iRet;

    return 0;
}
