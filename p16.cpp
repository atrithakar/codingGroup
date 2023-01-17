#include <iostream>
using namespace std;
int main()
{
    for (short i = 0; i < 5; i++)
    {
        for (short j = 0; j <= i; j++)
        {
            cout<<(char)(65+i);
        }
        cout<<endl;
    }
    
    return 0;
}