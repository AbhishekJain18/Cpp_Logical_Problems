//Accept String from user and copy the content of that
// into another string
#include<iostream>
using namespace std;
//////////////////////////////////////
void StrCpy(char *str, char *dest)
{
    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest = '\0';
}
//////////////////////////////////////
//              MAIN                //
//////////////////////////////////////
int main()
{
    char arr[30];
    char brr[30];

    cout<<"Enter string : ";
    cin.getline(arr,30);

    StrCpy(arr,brr);

    cout<<brr;

    return 0;
}