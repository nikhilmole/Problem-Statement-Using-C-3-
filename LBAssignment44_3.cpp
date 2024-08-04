#include<iostream>
using namespace std;

int ArrayAdd(int Arr[], int iLength)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iLength; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int i = 0;
    int iRet = 0;

    cout<<"Enter the size of elements : \n";
    cin>>iSize;

    ptr = new int[iSize];
    cout<<"Enter the elements : \n";

    for(i = 0; i < iSize; i++)
    {
        cin>>ptr[i];;
    }
    
    iRet = ArrayAdd(ptr,iSize);
    cout<<"Addition of N numbers  : "<<iRet<<"\n";
    
    delete []ptr;

    return 0;
}