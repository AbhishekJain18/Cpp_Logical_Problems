//Accept string and character from user
//return last index of it
#include<iostream>
using namespace std;
/////////////////////////////////////
int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iTemp = 0;
    for(iCnt = 0; *str != '\0'; iCnt++,str++)
    {
        if(*str == ch)
        {
            iTemp = iCnt;
        }
    }
    return iTemp;
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    cout<<"Enter character : ";
    cin>>cValue;

    iRet = LastChar(Arr,cValue);

    if(iRet == -1)
    {
        cout<<"Character is not present in string";
    }
    else
    {
        cout<<"Character last location is "<<iRet;
    }

    return 0;
}