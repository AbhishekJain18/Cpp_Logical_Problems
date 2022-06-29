//Find Largest Number from three Numbers - Generic
#include<iostream>
using namespace std;
///////////////////////////////////////
template<class T>
T Maximum(T No1, T No2, T No3)
{
    T Max;
    Max = No1;
    if(No1 < No2 && No3 < No2)
    {
        Max = No2;
    }
    else if(No3 < No1)
    {
        Max = No1;
    }
    else
    {
        Max = No3;
    }
    return Max;
}
///////////////////////////////////////
//               MAIN                //
///////////////////////////////////////
int main()
{
    int iRet = Maximum(10,20,-30);
    //printf("%d\n",iRet);
    cout<<iRet;
    float fRet = Maximum(10.20f,-10.20f,2.0f);
    printf("%f\n",fRet);

    return 0;
}

