#include<iostream>
using namespace std;

template<class T>
T MinNum(T Arr[],int iSize)
{
    int i = 0;
    T iMin = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iChoice = 0;
    int iValue = 0;
    int *iptr = NULL;
    float *fptr = NULL;
    int iRet = 0;
    float fRet = 0;
    int i = 0;

    cout << "Choice Data type to find maximum number\n";
    cout << "1 : Integer \n";
    cout << "2 : Float \n";
    cin >> iChoice;

    if(iChoice == 1)
    {
        cout << "Enter the number of integers: ";
        cin >> iValue;

        iptr = new int[iValue];

        cout << "Enter the elements : \n";
        for(i = 0; i < iValue; i++)
        {
            cin >> iptr[i];
        }

        iRet = MinNum(iptr, iValue);
        cout << "Maximum number is : " << iRet << endl;

        delete[] iptr; 
    }
    else if(iChoice == 2)
    {
        cout << "Enter the number of floats: ";
        cin >> iValue;

        fptr = new float[iValue];

        cout << "Enter the elements : \n";
        for(i = 0; i < iValue; i++)
        {
            cin >> fptr[i];
        }
        fRet = MinNum(fptr, iValue); 
        cout << "Maximum number is : " << fRet << endl;

        delete[] fptr; 
    }
    else
    {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
