//program which display ASCII table.
#include<iostream>
using namespace std;
////////////////////////////////////
void DisplayASCII()
{
    int iNum = 0;
    for(iNum = 0; iNum <= 255; iNum++)
    {
        printf("%c-%d-%x-%o\n",iNum,iNum,iNum,iNum);
    }
}
////////////////////////////////////
//              MAIN              //
////////////////////////////////////
int main()
{
    DisplayASCII();
    return 0;
}