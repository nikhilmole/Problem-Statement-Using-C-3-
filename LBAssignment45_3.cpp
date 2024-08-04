#include <iostream>
using namespace std;

template<class T>
T FirstOcc(T Arr[], int iSize, T iNo) 
{
    int i = 0;

    for(i = 1; i < iSize; i++) 
    {
        if(Arr[i] == iNo) 
        {
            return i;
        }

        
    }
    return -1; 
}

int main() 
{
    cout << "-------------Script used to Find first occurrence-------------" << endl;
    int iNo = 0;
    int iRet = 0;
    int iChoice = 0;

    int *iptr = NULL;
    float *fptr = NULL;
    char *cptr = NULL;

    cout << "Select option : " << endl;
    cout << "1 : Integer" << endl;
    cout << "2 : Character" << endl;
    cout << "3 : Float" << endl;
    cin >> iChoice;

    cout << "Enter number of elements: ";
    cin >> iNo;

    switch(iChoice) 
    {
        case 1:
            cout << "Enter elements: " << endl;
            iptr = new int[iNo];
            for(int i = 0; i < iNo; i++) 
            {
                cin >> iptr[i];
            }
            cout << "Enter number you want to search first occurrence: ";
            int iValue;
            cin >> iValue;
            iRet = FirstOcc(iptr, iNo, iValue);
            if (iRet != -1) 
            {
                cout << "First occurrence is at index: " << iRet + 1 << endl;
            } else 
            {
                cout << "Element not found" << endl;
            }
            delete[] iptr;
            break;
        case 2:
            cout << "Enter elements: " << endl;
            cptr = new char[iNo];
            for(int i = 0; i < iNo; i++) 
            {
                cin >> cptr[i];
            }
            cout << "Enter character you want to search first occurrence: ";
            char ch;
            cin >> ch;
            iRet = FirstOcc(cptr, iNo, ch);
            if (iRet != -1) 
            {
                cout << "First occurrence is at index: " << iRet + 1 << endl;
            } else 
            {
                cout << "Character not found" << endl;
            }
            delete[] cptr;
            break;
        case 3:
            cout << "Enter elements: " << endl;
            fptr = new float[iNo];
            for(int i = 0; i < iNo; i++) 
            {
                cin >> fptr[i];
            }
            cout << "Enter number you want to search first occurrence: ";
            float fValue;
            cin >> fValue;
            iRet = FirstOcc(fptr, iNo, fValue);
            if (iRet != -1) 
            {
                cout << "First occurrence is at index: " << iRet + 1<< endl;
            } else 
            {
                cout << "Element not found" << endl;
            }
            delete[] fptr;
            break;
        default:
            cout << "Invalid option" << endl;
    }
    return 0;
}
