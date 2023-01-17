#include <iostream>
using namespace std;
int main()
{
    short x = 1;
    for (short i = 0; i < 5; i++)
    {
        for (short j = 0; j <= i; j++, x++)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}