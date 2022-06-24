//Accept String fromm user and Count number of small Characters
#include<iostream>
using namespace std;
////////////////////////////////////
int CountSmall(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Entre String : "<<endl;
    cin.getline(Arr,30);

    iRet = CountSmall(Arr);

    cout<<iRet;

    return 0;
}