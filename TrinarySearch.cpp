#include <iostream>
/*Caution: This code don't work for inputs 10 , 11 and numbers greater than 12.
I'll improve it later.*/
using namespace std;
int iterations = 0;
int trinarySearch(int arr[], int size, int element)
{
    int low = 0, high = size - 1, midL, midH;
    while (low < high)
    {
        iterations++;
        midL = (low + high) / 3;
        midH = (2*(low + high)) / 3;
        if (midL > midH)
        {
            cout<<"error";
            return -1;
        }
        
        if (arr[midL] == element)
        {
            return midL;
        }
        if (arr[midH] == element)
        {
            return midH;
        }
        if (arr[low] == element)
        {
            return low;
        }
        if (arr[high] == element)
        {
            return high;
        }
        if (arr[midL] > element)
        {
            high = midL - 1;
            continue;
        }
        if (arr[midH] < element)
        {
            low = midH + 1;
            continue;
        }
        if (arr[midL] < element && arr[midH] > element)
        {
            low = midL + 1;
            high = midH - 1;
        }
    }
    return -1;
}
int main()
{
    int array[12];
    int sizeOfArray = sizeof(array) / sizeof(int);
    int number;
    for (int i = 0; i < sizeOfArray; i++)
    {
        array[i] = i + 1;
    }
    cout << "Enter the number you want to search: ";
    cin >> number;
    int index;
    index = trinarySearch(array, sizeOfArray, number);
    if (index == -1)
    {
        cout << "Error 404! Number not found! :(" << endl;
        return 0;
    }
    cout << "Number " << number << " found at index number " << index << "." << endl;
    cout << "iterations performed: " << iterations << endl;

    return 0;
}