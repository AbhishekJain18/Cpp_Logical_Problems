//Accept string and character from user
//and copy small characters
#include<iostream>
using namespace std;
/////////////////////////////////////
void SteCpySmall(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *dest = *str;
            *dest++;
        }
        str++;
    }
    *dest = '\0';
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    SteCpySmall(Arr,Brr);

    cout<<Brr;

    return 0;
}