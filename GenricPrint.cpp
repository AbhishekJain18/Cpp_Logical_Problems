//Accept one value and one number from user
// print that value of that number on screen - Genric
#include<iostream>
using namespace std;
////////////////////////////////////
template<class T>
void Display(T value , int iSize)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}
////////////////////////////////////
//               MAIN             //
////////////////////////////////////
int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}