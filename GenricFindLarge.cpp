//Accept N number and return Largest - Generic
#include<iostream>
using namespace std;
////////////////////////////////////
template<class T>
T Max(T *arr, int iSize)
{
    T Max = arr[0];
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Max < arr[iCnt])
        {
            Max = arr[iCnt];
        }
    }
    return Max;
}
////////////////////////////////////
//              MAIN              //
////////////////////////////////////
int main()
{
    int arr[] = {10 ,20 ,30 ,40 ,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iRet = Max(arr,5);
    float fRet = Max(brr,4);

    printf("%d\n",iRet);
    printf("%f\n",fRet);
    return 0;
}