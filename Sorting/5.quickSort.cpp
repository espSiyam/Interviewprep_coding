#include<iostream>
using namespace std;

int Partition(int a[], int start, int end)
{
    int i;
    int pivot = a[end];
    int partitionIndex = start;
    for(i= start; i<end;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[partitionIndex++]);
        }
    }
    swap(a[partitionIndex],a[end]);
    return partitionIndex;
}

void quicksort(int a[], int start, int end)
{
    if(start>=end)
        return;
    int partitionIndex = Partition(a,start,end);
    quicksort(a, start, partitionIndex-1);
    quicksort(a, partitionIndex+1, end);
}

int main()
{
    int i;
    int a[] = {7,6,5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        cout <<a[i]<<" ";
    return 0;
}
