#include<iostream>
using namespace std;

template<class T>
T Multiply(T iNo1, T iNo2)
{
    T Ans = 0;
    Ans = iNo1 * iNo2;
    return Ans;
}
int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Multiply(10,20);
    cout<<"Multiplication is : "<<iRet<<"\n";

    fRet = Multiply(10.11f,11.45f);
    cout<<"Multiplication is : "<<fRet<<"\n";

    return 0;
}