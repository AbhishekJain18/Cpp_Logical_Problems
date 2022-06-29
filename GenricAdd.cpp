//Application to Multiplay two Numbers - Generic
#include<iostream>
using namespace std;
////////////////////////////////////
template<class T>
T Multiplay(T No1, T No2)
{
    T ans;
    ans = No1 * No2;
    return ans;
}
////////////////////////////////////
//               MAIN             //
////////////////////////////////////
int main()
{
    int iRet = Multiplay(10,20);
    printf("%d\n",iRet);

    float fRet = Multiplay(10.5f,20.5f);
    printf("%f\n",fRet);

    return 0;
}