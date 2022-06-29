//Accept N values and revers the content - Genric
#include<iostream>
using namespace std;
////////////////////////////////////
template<class T>
void Reverse(T *arr, int iSize)
{
    T Temp;
    for(int i = 0 , j = (iSize-1);  i < j; i++,j--)
    {
        Temp = arr[i];
        arr[i] = arr[j];
        arr[j] = Temp;
    }
}
////////////////////////////////////
//              MAIN              //
////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    for(int i = 0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Reverse(arr,9);
    for(int i = 0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}