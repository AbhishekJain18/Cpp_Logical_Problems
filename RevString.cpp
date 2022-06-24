#include<iostream>
using namespace std;
///////////////////////////////////
void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
///////////////////////////////////
//              MAIN             //
///////////////////////////////////
int main()
{
    char Arr[30];

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    Reverse(Arr);

    cout<<Arr;
    return 0;
}