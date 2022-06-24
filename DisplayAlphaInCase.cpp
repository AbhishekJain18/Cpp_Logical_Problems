//Accpet character from user.
//if it is capital then display till Z (Farward)
//If it is small then display till a (backward)
#include<iostream>
using namespace std;
///////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch != ('Z'+ 1))
        {
            cout<<ch<<" ";
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch != ('a' - 1))
        {
            cout<<ch<<" ";
            ch--;
        }
    }
    else
    {
        return;
    }
}
///////////////////////////////////////
//                MAIN               //
///////////////////////////////////////
int main()
{
    char cValue = '\0';

    cout<<"Enter the charcter : ";
    cin>>cValue;

    Display(cValue);
    return 0;
}