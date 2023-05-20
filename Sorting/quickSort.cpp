#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int smallest = start - 1;

    for (int i = start; i <= end - 1; i++)
    {
        if (arr[i] < pivot)
        {
            smallest++;
            swap(arr[smallest], arr[i]);
        }
    }
    int pIndex = smallest + 1;
    swap(arr[pIndex], arr[end]);
    return pIndex;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}