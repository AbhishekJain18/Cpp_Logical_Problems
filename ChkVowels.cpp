//Accept String from user and check wheather it contains vowels or not
#include<iostream>
using namespace std;
///////////////////////////////////
bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(
            *str == 'A' || *str == 'a' ||
            *str == 'E' || *str == 'e' ||
            *str == 'I' || *str == 'i' ||
            *str == 'O' || *str == 'o' ||
            *str == 'U' || *str == 'u'
           )
           {
            break;
           }
        str++;
    }
    if(*str != '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}
///////////////////////////////////
//              MAIN             //
///////////////////////////////////
int main()
{
    char Arr[30];
    bool bRet = false;

    cout<<"Enter string : ";
    cin.getline(Arr,30);

    bRet = ChkVowel(Arr);
    if(bRet == true)
    {
        cout<<"It Contains Vowels";
    }
    else
    {
        cout<<"There is no Vowels";
    }
    return 0;
}