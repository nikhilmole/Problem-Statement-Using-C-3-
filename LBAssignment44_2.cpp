#include<iostream>
using namespace std;

template<class T>
T MaxNum(T iNo1, T iNo2 , T iNo3)
{
    T iMax = iNo1;

    if(iMax < iNo2)
    {
        iMax =  iNo2;
    }
    if(iMax < iNo3)
    {
        iMax = iNo3;
    }
    return iMax;
}
int main()
{
    cout<<"---------------Programm to find Maximum number ---------\n";
    int Choice = 0;
    cout<<"1 : Enter your choice : \n";
    cout<<"1 : Enter integer \n";
    cout<<"2 : Enter Flot \n";
    cin>>Choice;

    if(Choice == 1)
    {
        int iValue1 = 0, iValue2 = 0, iValue3 = 0 , iRet = 0;
        cout<<"Enter three integer : \n";
        cout<<"Enter First integer : \n";
        cin>>iValue1;
        cout<<"Enter second integer : \n";
        cin>>iValue2;
        cout<<"Enter third integer : \n";
        cin>>iValue3;
        iRet = MaxNum(iValue1, iValue2, iValue3);
        cout<<"maximum number is : "<<iRet;
    }
    if(Choice == 2)
    {
        int fValue1 = 0.0f, fValue2 = 0.0f, fValue3 = 0.0f, fRet = 0.0f;

        cout<<"Enter three integer : \n";
        cout<<"Enter first float : \n";
        cin>>fValue1;
        cout<<"Enter second float : \n";
        cin>>fValue2;
        cout<<"Enter third float:  \n";
        cin>>fValue3;
        fRet = MaxNum(fValue1, fValue2, fValue3);
        cout<<"Maximum number is : "<<fRet;
    }

    return 0;
}