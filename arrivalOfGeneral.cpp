/*
----------QUESTION FROM CODEFORCES----------
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.

Input
The first input line contains the only integer n (2 ≤ n ≤ 100) which represents the number of soldiers in the line. The second line contains integers a1, a2, ..., an (1 ≤ ai ≤ 100) the values of the soldiers' heights in the order of soldiers' heights' increasing in the order from the beginning of the line to its end. The numbers are space-separated. Numbers a1, a2, ..., an are not necessarily different.

Output
Print the only integer — the minimum number of seconds the colonel will need to form a line-up the general will like
*/

/*
My approach:
--> Read n, make array of that size if n satisfies constraints
--> Using maxMin function find soldier with maximum height and soldier with minimum height
--> Using binarySearch function find the positions of them
--> using swap functions swap the soldiers until the condition given in question is fulfilled and while doing so increase count by 1
--> at last print count

Note: I WILL SOLVE THIS TOMORROW AS I AM GOING TO STUDY ANOTHER THING FOR NOW.. YOU CAN COMPLETE THIS CODE OR IMPROVE IT IF YOU WANT TO DO SO! XD
*/
#include <iostream>
using namespace std;
int count;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    count++;
}
int binarySearch(int array[], int sizeOfArray, int element)
{
    int low = 0, mid, high = sizeOfArray - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid + 1;
        }
        if (array[mid] > element)
        {
            high = mid - 1;
        }
        if (array[mid] < element)
        {
            low = mid + 1;
        }
    }
    return -1;
}
pair<int,int> maxMin(int array[], int arraySize)
{
    int max, min;
    for (int i = 0; i < arraySize; i++)
    {
        if (i == 0)
        {
            max = array[0];
            min = array[0];
        }
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return  make_pair(max, min);
}
int main()
{
    int n, x, y;
    cin >> n;
    if (n >= 2 && n <= 100)
    {
        int height[n];
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
    make_pair(x, y) = maxMin(height, n);
    cout<<"max = "<<x<<" min = "<<y;
    }

    return 0;
}