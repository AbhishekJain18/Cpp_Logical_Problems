//Accept String fromm user and Count number of Capital Characters
#include<iostream>
using namespace std;
////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(Arr);

    cout<<iRet;

    return 0;
}