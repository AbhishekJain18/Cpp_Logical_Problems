//Accept character and toggle the case of that character
#include<iostream>
using namespace std;
/////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        cout<<ch;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        cout<<ch;
    }
    else
    {
        cout<<"It is not a charcter";
    }
}
/////////////////////////////////////
//              MAIN               //
/////////////////////////////////////
int main()
{
    char cValue = '\0';

    cout<<"Enter the character : ";
    cin>>cValue;

    Display(cValue);

    return 0;
}