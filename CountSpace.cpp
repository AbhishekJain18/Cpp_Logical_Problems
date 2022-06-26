//Accept string and count number of white spaces
#include<iostream>
using namespace std;
////////////////////////////////////
int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
////////////////////////////////////
//              MAIN              //
////////////////////////////////////
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    iRet = CountWhite(Arr);

    cout<<iRet;

    return 0;
}