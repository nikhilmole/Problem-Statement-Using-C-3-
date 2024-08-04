#include <iostream>
using namespace std;

template <class T>
T Reverse(T Arr[], int iSize)
{
    int start = 0;
    int end = iSize - 1;
    T temp = 0;

    while (start < end)
    {
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int iChoice = 0;
    int iLength = 0;
    int i = 0;

    int *iptr = NULL;
    float *fptr = NULL;
    char *cptr = NULL;

    cout << "Select one option : " << endl;
    cout << "1 : Integer" << endl;
    cout << "2 : Character" << endl;
    cout << "3 : Float" << endl;
    cin >> iChoice;

    cout << "Enter the number of elements: ";
    cin >> iLength;

    switch (iChoice)
    {
        case 1:
            iptr = new int[iLength];
            cout << "Enter the elements: " << endl;
            for (i = 0; i < iLength; i++)
            {
                cin >> iptr[i];
            }
            Reverse(iptr, iLength);
            cout << "Reversed array: ";
            for (i = 0; i < iLength; i++)
            {
                cout << iptr[i] << " ";
            }
            cout << endl;
            delete[] iptr;
            break;

        case 2:
            cptr = new char[iLength];
            cout << "Enter the elements: " << endl;
            for (i = 0; i < iLength; i++)
            {
                cin >> cptr[i];
            }
            Reverse(cptr, iLength);
            cout << "Reversed array: ";
            for (i = 0; i < iLength; i++)
            {
                cout << cptr[i] << " ";
            }
            cout << endl;
            delete[] cptr;
            break;

        case 3:
            fptr = new float[iLength];
            cout << "Enter the elements: " << endl;
            for (i = 0; i < iLength; i++)
            {
                cin >> fptr[i];
            }
            Reverse(fptr, iLength);
            cout << "Reversed array: ";
            for (i = 0; i < iLength; i++)
            {
                cout << fptr[i] << " ";
            }
            cout << endl;
            delete[] fptr;
            break;

        default:
            cout << "Invalid option" << endl;
    }

    return 0;
}
