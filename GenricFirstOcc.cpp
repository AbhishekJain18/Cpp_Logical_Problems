//Accept N values and search first occurrence of any specific value -Genric
#include<iostream>
using namespace std;
//////////////////////////////////////
template<class T>
int SearchFirst(T *arr, int iSize, T value)
{
    int iCnt = 0;
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt]== value)
        {
            break;
        }
    }
    return iCnt+1;
}
//////////////////////////////////////
//               MAIN               //
//////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    cout<<iRet;

    return 0;
}