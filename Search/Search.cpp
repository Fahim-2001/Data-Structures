#include <iostream>
#include <cmath>
using namespace std;

int linearSearch(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int array[], int n, int key)
{
    int start = 0, mid, end = n;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n; // Size of the array.
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Key to find in array.
    int key;
    cin >> key;

    // cout << linearSearch(array, n, key) << endl;
    cout << binarySearch(array, n, key) << endl;

    return 0;
}