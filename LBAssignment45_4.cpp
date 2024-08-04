#include <iostream>
using namespace std;

template<class T>
int LastOcc(T Arr[], int iSize, T No)
{
    int i = 0;
    for(i = iSize - 1; i >= 0; i--)
    {
        if(Arr[i] == No)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << "------------Program to find last occurrence--------------" << endl;
    int iLength = 0;
    int iNo = 0;
    char ch = '\0';
    float fNo = 0.0;
    int iChoice = 0;
    int iRet = 0;

    int *iptr = NULL;
    char *cptr = NULL;
    float *fptr = NULL;

    cout << "Select one option:" << endl;
    cout << "1 : Integer" << endl;
    cout << "2 : Float" << endl;
    cout << "3 : Character" << endl;
    cin >> iChoice;

    cout << "Enter the number of elements: ";
    cin >> iLength;

    switch(iChoice)
    {
        case 1:
            iptr = new int[iLength];
            cout << "Enter the elements: " << endl;
            for(int i = 0; i < iLength; i++)
            {
                cin >> iptr[i];
            }
            cout << "Which element do you want to search: ";
            cin >> iNo;
            iRet = LastOcc(iptr, iLength, iNo);
            if(iRet != -1)
            {
                cout << "Last occurrence is at index: " << iRet + 1 << endl;
            }
            else
            {
                cout << "Number is not found" << endl;
            }
            delete[] iptr;
            break;
        
        case 2:
            fptr = new float[iLength];
            cout << "Enter the elements: " << endl;
            for(int i = 0; i < iLength; i++)
            {
                cin >> fptr[i];
            }
            cout << "Which element do you want to search: ";
            cin >> fNo;
            iRet = LastOcc(fptr, iLength, fNo);
            if(iRet != -1)
            {
                cout << "Last occurrence is at index: " << iRet + 1 << endl;
            }
            else
            {
                cout << "Number is not found" << endl;
            }
            delete[] fptr;
            break;

        case 3:
            cptr = new char[iLength];
            cout << "Enter the elements: " << endl;
            for(int i = 0; i < iLength; i++)
            {
                cin >> cptr[i];
            }
            cout << "Which element do you want to search: ";
            cin >> ch;
            iRet = LastOcc(cptr, iLength, ch);
            if(iRet != -1)
            {
                cout << "Last occurrence is at index: " << iRet + 1 << endl;
            }
            else
            {
                cout << "Character is not found" << endl;
            }
            delete[] cptr;
            break;

        default:
            cout << "Invalid option" << endl;
    }

    return 0;
}
