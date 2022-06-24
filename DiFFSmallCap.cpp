//Accept String fromm user and returns difference between small and capital case charctrer
#include<iostream>
using namespace std;
////////////////////////////////////
int Differnce(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt1++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCnt2++;
        }
        str++;
    }
    return (iCnt1 - iCnt2);
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

    iRet = Differnce(Arr);

    cout<<iRet;

    return 0;
}