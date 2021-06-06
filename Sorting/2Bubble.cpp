#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i,j;
    for (i=0; i<n-1;i++)
    {
        int flag = 0;
        for (j=0;j<n-i-1;j++)
            if (arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    flag = 1;
                }
        if(flag == 0)
            break;
    }
}

int main()
{
    int data[] = {5,4,3,2,1};
    int size = sizeof(data)/sizeof(data[0]);
    bubbleSort(data, size);
    cout<< "Sorted Array: \n";
    for(int i = 0; i<size; i++ )
        cout <<data[i]<< " ";
}
