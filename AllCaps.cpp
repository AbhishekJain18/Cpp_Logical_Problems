//Accept string from user and copy that charcter into another
// Convert all small into capitals
#include<iostream>
using namespace std;
//////////////////////////////////////
void StrCpyCap(char *scr, char *dest)
{
    while(*scr != '\0')
    {
        if(*scr >= 'a' && *scr <= 'z')
        {
            *dest = (*scr - 32);
        }
        else
        {
            *dest = *scr;
        }
        dest++;
        scr++;
    }
    *dest = '\0';
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    char Arr[30]= "Marvellous Python";
    char Brr[30];

    StrCpyCap(Arr,Brr);

    cout<<Brr;

    return 0;
}