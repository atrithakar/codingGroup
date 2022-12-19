#include <iostream>
using namespace std;
void decToHex(int i)
{
    int orignum = i, size = 0, remainder;
    while (i != 0)
    {
        i /= 16;
        size++;
    }
    char hex[size];
    for (int i = 0; orignum!=0; i++)
    {
        remainder = orignum % 16;
        switch (remainder)
        {
        case 0:
            hex[i] = '0';
            break;
        case 1:
            hex[i] = '1';
            break;
        case 2:
            hex[i] = '2';
            break;
        case 3:
            hex[i] = '3';
            break;
        case 4:
            hex[i] = '4';
            break;
        case 5:
            hex[i] = '5';
            break;
        case 6:
            hex[i] = '6';
            break;
        case 7:
            hex[i] = '7';
            break;
        case 8:
            hex[i] = '8';
            break;
        case 9:
            hex[i] = '9';
            break;
        case 10:
            hex[i] = 'a';
            break;
        case 11:
            hex[i] = 'b';
            break;
        case 12:
            hex[i] = 'c';
            break;
        case 13:
            hex[i] = 'd';
            break;
        case 14:
            hex[i] = 'e';
            break;
        case 15:
            hex[i] = 'f';
            break; 
        default:
            break;
        }
        orignum /= 16;
    }
    for (int i = size-1; i >= 0; i--)
    {
        cout<<hex[i];
    }
    
    
    
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    decToHex(num);
    return 0;
}