#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2, ans = -1;
    while (end >= start)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2, ans = -1;
    while (end >= start)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int totOcc(int arr[], int size, int key)
{
    return lastOcc(arr, size, key) - firstOcc(arr, size, key) + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    // cout<<sizeof(arr)/sizeof(int)<<endl;
    cout << "First occurrence of 3 is at index " << firstOcc(arr, 20, 3) << endl;
    cout << "last occurrence of 3 is at index " << lastOcc(arr, 20, 3) << endl;
    cout << "Total occurrence of 3 is " << totOcc(arr, 20, 3) << endl;
    return 0;
}