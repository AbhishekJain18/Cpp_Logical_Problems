//Accept string and character from user
//return index of it
#include<iostream>
using namespace std;
/////////////////////////////////////
int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCnt++;
        str++;
    }
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    iRet = FirstChar(Arr,cValue);

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