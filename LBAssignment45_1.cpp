#include<iostream>
using namespace std;

template<class T>
T Display(T Mix, int iNum)
{
    int i = 0;

    for(i = 1 ; i <= iNum; i++)
    {
        cout<<Mix<<"\t"<<endl;
    }
}
int main()
{
    cout<<"---------------script for print on screen--------------"<<endl;
    char ch = '\0';
    int iValue = 0;
    float fValue = 0;
    int iNo = 0;
    int iChoice = 0;

    cout<<"Select what you want to printt on screen : "<<endl;
    cout<<"1 : Character : "<<endl;
    cout<<"2 : Integer : "<<endl;
    cout<<"3 : Float : "<<endl;
    cin>>iChoice;

    switch(iChoice)
    {
        case 1 :
            cout<<"Enter number how many time you want to print on screen : "<<endl;
            cin>>iNo;
            cout<<"Enter charecter you want print on screen : "<<endl;
            cin>>ch;
            Display(ch, iNo);
            break;

        case 2 :
            cout<<"Enter number how many time you want to print on screen : "<<endl;
            cin>>iNo;
            cout<<"Enter Integer you want print on screen : "<<endl;
            cin>>iValue;
            Display(iValue, iNo);
            break;

        case 3 :
            cout<<"Enter number how many time you want to print on screen : "<<endl;
            cin>>iNo;
            cout<<"Enter decimal number you want print on screen : "<<endl;
            cin>>fValue;
            Display(fValue, iNo);
            break;

        default:
            cout<<"Invalid option"<<endl;
    }

    return 0;
}
