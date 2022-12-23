#include <iostream>
using namespace std;
void occurance(int arr[], int size, int element)
{
    int count = 0, positions[size], j=0;
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            count++;
            positions[j] = i;
            j++;
        }
    }

    if (count == 0)
    {
        cout << element << " is not present in this array." << endl;
        return;
    }

    cout << element << " is present " << count << " times at positions ";
    for (int i = 0; i < j; i++)
    {
        cout<<positions[i];
        if (i < j-1)
        {
            cout<<", ";
        }
    }
    cout<<"."<<endl;
    
}
int main()
{
    int array[10] = {1, 2, 3, 1, 2, 3, 1, 3, 3, 3}, number;
    cout << "Enter the number you want to find the occurance of: ";
    cin >> number;
    occurance(array, 10, number);
    return 0;
}