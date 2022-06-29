//Accept N Numbers from user and return Addition - Generic
#include<iostream>
using namespace std;
////////////////////////////////////
template<class T>
T AddN(T (*arr) , int iSize)
{
    T Sum;
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}
////////////////////////////////////
//              MAIN              //
////////////////////////////////////
int main()
{
    int arr[] = {10 ,20 ,30 ,40 ,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iSum = 0;
    iSum = AddN(arr,5);
    float fSum = AddN(brr,4);

    printf("%d\n",iSum);
    printf("%f\n",fSum);

    return 0;
}