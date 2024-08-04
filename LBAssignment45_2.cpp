#include<iostream>
using namespace std;

template<class T>
T CountFreq(T Arr[], int Num, T Search)
{
    int i = 0;
    int iCount = 0;

    for(i = 0; i < Num; i++)
    {
        if(Search == Arr[i])
        {
            iCount++;
        }
    }
    return iCount;

}
int main()
{
    int iValue = 0;
    int iNo = 0;
    char ch = '\0';
    float fValue = 0.0f;
    int iChoice = 0;
    int i = 0;

    int *iptr = NULL;
    float *fptr = NULL;
    char *cptr = NULL;
    int iRet = 0;

    cout<<"Select one option to count frequency"<<endl;
    cout<<"1 : Integer"<<endl;
    cout<<"2 : charecter"<<endl;
    cout<<"3 : Decimal number"<<endl;
    cin>>iChoice;

    cout<<"How many number you want to add in Array : "<<endl;
    cin>>iValue;

    switch(iChoice)
    {
        case 1:
            cout<<"Enter elements : "<<endl;
            iptr = new int[iValue];
            for(i = 0; i < iValue; i++)
            {
                cin>>iptr[i];
            }
            cout<<"Which element you want to count : "<<endl;
            cin>>iNo;
            iRet = CountFreq(iptr, iValue, iNo);
            cout<<"Frequaency is : "<<iRet;
            delete []iptr;
            break;
        case 2:
            cout<<"Enter elements : "<<endl;
            cptr = new char[iValue];
            for(i = 0; i < iValue; i++)
            {
                cin>>cptr[i];
            }
            cout<<"Which element you want to count : "<<endl;
            cin>>ch;
            iRet = CountFreq(cptr, iValue,ch);
            cout<<"Frequaency is : "<<iRet;
            delete []cptr;
            break;

        case 3:
            cout<<"Enter elements : "<<endl;
            fptr = new float[iValue];
            for(i = 0; i < iValue; i++)
            {
                cin>>fptr[i];
            }
            cout<<"Which element you want to count : "<<endl;
            cin>>fValue;
            iRet = CountFreq(fptr, iValue, fValue);
            cout<<"Frequaency is : "<<iRet;
            delete []fptr;
            
            break;

        default:
            cout<<"Invalid option"<<endl;
    }


    return 0;
}
