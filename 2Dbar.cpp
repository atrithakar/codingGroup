#include <iostream>
using namespace std;
void bar_2d(int height)
{
    cout << " ";
    for (int i = 0; i < height; i++)
    {
        cout << "_";
    }
    cout << endl;
    for (int i = 0; i < height + 2; i++)
    {
        if (i == 0)
        {
            cout << "|";
        }
        else if (i == height + 1)
        {
            cout << "|" << endl;
        }
        else
        {
            cout << "_";
        }
    }

}
int main()
{
    int number;
    cout<<"How many bars do you want to print?"<<endl<<"Ans: ";
    cin>>number;
    if (number<1)
    {
        cout<<"Enter valid number."<<endl;
        return 0;
    }
    int height[number];
    
    for (int i = 0; i < number; i++)
    {
        cout<<"Enter height of bar no. "<<i + 1<<" : ";
        cin>>height[i];
    }
    for (int i = 0; i < number; i++)
    {
        bar_2d(height[i]);
    }
    
    
    return 0;
}