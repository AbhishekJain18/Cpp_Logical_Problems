//Accept String from user and copy the content
//into another string and remove all the spaces
#include<iostream>
using namespace std;
///////////////////////////////////////
void StrReSpc(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}
///////////////////////////////////////
//               MAIN                //
///////////////////////////////////////
int main()
{
    char Arr[30]= "Marvel  lous  Pyth on";
    char Brr[30];

    StrReSpc(Arr,Brr);

    cout<<Brr;

    return 0;
}