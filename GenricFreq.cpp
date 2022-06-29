//Accept N values and count frequency of any specific value - Genric
#include<iostream>
using namespace std;
//////////////////////////////////////
template<class T>
int Frequency(T *arr, int iSize, T Value)
{
    int iCnt = 0;
    int iFreq = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == Value)
        {
            iFreq++;
        }
    }
    return iFreq;
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    cout<<iRet;

    return 0;
}