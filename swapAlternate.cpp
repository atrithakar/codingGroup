#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size)
{
    if (size % 2 == 0)
    {
        for (int i = 0; i < size; i += 2)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        cout << "{";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
            if (i < size - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
    else
    {
        for (int i = 0; i < size - 1; i += 2)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        cout << "{";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
            if (i < size - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
}
int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // swapAlternate(arr, 5);
    int n;
    cout << "Enter the size of array you want to create: ";
    cin >> n;
    if (n <= 2)
    {
        cout << "Enter a valid number.";
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> arr[i];
    }
    swapAlternate(arr, n);

    return 0;
}