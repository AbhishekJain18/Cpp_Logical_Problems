//Accept charcter from user and display its ASCII values
#include<iostream>
using namespace std;
///////////////////////////////////
void Display(char ch)
{
    printf("Decimal      %d\n",ch);
    printf("octal        %o\n",ch);
    printf("Hexadecimal  %x\n",ch);
}
//////////////////////////////////
//              MAIN            //
//////////////////////////////////
int main()
{
    char cValue = '\0';

    cout<<"Enter the charcter : ";
    cin>>cValue;

    Display(cValue);

    return 0;
}