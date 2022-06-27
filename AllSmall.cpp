//Accept string from user and copy that charcter into another
// Convert all  capitals into small
#include<iostream>
using namespace std;
//////////////////////////////////////
void StrCpySmall(char *scr, char *dest)
{
    while(*scr != '\0')
    {
        if(*scr >= 'A' && *scr <= 'Z')
        {
            *dest = (*scr + 32);
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

    StrCpySmall(Arr,Brr);

    cout<<Brr;

    return 0;
}