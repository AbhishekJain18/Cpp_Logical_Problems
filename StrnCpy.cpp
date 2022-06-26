//Accept String from user and copy the content
//into another upto a given limit
#include<iostream>
using namespace std;
//////////////////////////////////////
void StrCpyX(char *str, char *dest, int iCnt)
{
    while((*str != '\0') && (iCnt != 0))
    {
        *dest = *str;
        *str++;
        *dest++;
        iCnt--;
    }
    *dest = '\0';
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    StrCpyX(Arr,Brr,10);

    cout<<Brr;

    return 0;
}