//Accept string from user and copy that charcter into another
//string in reverse order.
#include<iostream>
using namespace std;
/////////////////////////////////////
void StrCpyRev(char *src, char *dest)
{
    char *end = NULL;
    end = src;
    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(*src != '\0')
    {
        *dest = *end;
        dest++;
        end--;
        src++;
    }
    *dest = '\0';
}
//////////////////////////////////////
//               MAIN               //
//////////////////////////////////////
int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30] ;

    StrCpyRev(Arr,Brr);

    cout<<Brr;

    return 0;
}