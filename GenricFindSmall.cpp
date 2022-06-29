//Accept N number and return Smallest - Genric
#include<iostream>
using namespace std;
////////////////////////////////////
template<class T>
T Min(T *arr, int iSize)
{
    T Min = arr[0];
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Min > arr[iCnt])
        {
            Min = arr[iCnt];
        }
    }
    return Min;
}
////////////////////////////////////
//              MAIN              //
////////////////////////////////////
int main()
{
    int arr[] = {10 ,20 ,30 ,40 ,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iRet = Min(arr,5);
    float fRet = Min(brr,4);

    printf("%d\n",iRet);
    printf("%f\n",fRet);
    return 0;
}