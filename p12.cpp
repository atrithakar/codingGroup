#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <= 4-i; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<i-j+1;
        }

        
        cout<<endl;
    }
    
    return 0;
}