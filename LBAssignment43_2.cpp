#include<iostream>
using namespace std;

template<class T>
T MaxNum(T No1, T No2, T No3)
{
    T iMax = No1;
    if(No2 > iMax)
    {
        iMax = No2;
    }
    if(No3 > iMax)
    {
        iMax = No3;
    }
    return iMax;
}

int main()
{
    printf("--------------Find largest number script--------------\n");
    int choice = 0;
    cout<<"Choose data type for  : \n";
    cout<<"1 : Integer\n";
    cout<<"2 : Float\n";
    cin>>choice;

    if(choice == 1)
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iValue3 = 0;
        int iRet = 0;

        cout<<"Enter three entegers :\n";
        cout<<"Enter first integer :\n";
        cin>>iValue1;
        cout<<"Enter second integer :\n";
        cin>>iValue2;
        cout<<"Enter third integer :\n";
        cin>>iValue3;

        iRet = MaxNum(iValue1,iValue2,iValue3);
        cout<<"largest number  is : "<<iRet<<"\n";
    }   
    if(choice == 2)
    {
        float iValue1 = 0.0f;
        float iValue2 = 0.0f;
        float iValue3 = 0.0f;
        float fRet = 0.0f;

        cout<<"Enter three float :\n";
        cout<<"Enter first float :\n";
        cin>>iValue1;
        cout<<"Enter second float :\n";
        cin>>iValue2;
        cout<<"Enter third float :\n";
        cin>>iValue3;

        fRet = MaxNum(iValue1,iValue2,iValue3);
        cout<<"Largest number is is : "<<fRet<<"\n";
    }    

    return 0;
}