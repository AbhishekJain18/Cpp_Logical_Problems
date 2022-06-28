//Accept two Numbers from user and
//Display position of comman bits on
#include<iostream>
using namespace std;
//////////////////////////////////////
void CommanBits(int iNo1, int iNo2)
{
    int Count = 1;
    int iNum = 0;
    int iMask = 0X00000001;
    iNum = iNo1 & iNo2;

    while(iNum != 0)
    {
        if((iNum & iMask) == 1)
        {
            cout<<Count<<" ";
        }
        Count++;
        iNum = iNum >> 1;
    }
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter First Number : ";
    cin>>iValue1;

    cout<<"Enter Second Number : ";
    cin>>iValue2;

    CommanBits(iValue1,iValue2);
    
    return 0;
}