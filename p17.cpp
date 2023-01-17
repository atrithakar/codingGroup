#include <iostream>
using namespace std;
int main()
{
    for (short i = 0; i < 4; i++)
    {
        for (short j = 0; j < 4-i-1; j++)
        {
            cout<<" ";
        }
        for (short j = 0; j <= i; j++)
        {
            cout<<(char)(65+j);
        }
        for (short j = 0; j < i; j++)
        {
            cout<<(char)(65+(i-j-1));
        }
        
        cout<<endl;
    }
    
    return 0;
}