#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i,j;
    for (i=0; i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
            if (arr[j]>arr[j+1])
        {
            int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
        }

    }

}

int main()
{
    int data[] = {-2,45,0,11,-9};
    int size = sizeof(data)/sizeof(data[0]);
    bubbleSort(data, size);
    cout<< "Sorted Array: \n";
    for(int i = 0; i<size; i++ )
        cout <<data[i]<< " ";
}
