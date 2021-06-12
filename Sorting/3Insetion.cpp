#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, value, hole;
    for (i = 1; i < n; i++)
    {
        value = arr[i];
        hole = i;
        while (hole > 0 && arr[hole-1] > value)
        {
            arr[hole] = arr[hole-1];
            hole = hole - 1;
        }
        arr[hole] = value;
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    for(int i = 0; i<n; i++ )
        cout <<arr[i]<< " ";
    return 0;
}
