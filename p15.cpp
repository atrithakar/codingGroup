#include <iostream>
using namespace std;
int main()
{
    for (short i = 0; i < 5; i++)
    {
        for (short j = 0; j < 5-i; j++)
        {
            cout<<(char)(j+65);
        }
        cout<<endl;
    }
    
    return 0;
}