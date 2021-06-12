#include<iostream>
using namespace std;

void merge(int a[], int s, int e)
{
    int mid = (s+e)/2;;
    int i = s;
    int j = mid+1;
    int key = s;
    int temp[500];

    while(i<=mid && j<=e)
    {
        if(a[i]<a[j]){
            temp[key++] = a[i++];
        }
        else{
            temp[key++] = a[j++];
        }
    }
    while (i<=mid){
        temp[key++] = a[i++];
    }
    while (j<=e){
        temp[key++] = a[j++];
    }
    for(i = s; i<= e;i++)
        a[i] = temp[i];
}

void mergesort(int arr[], int s, int e)
{
    if (s>=e)
        return;
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);

}

int main()
{
    int a[] = {54,23,675,223,64,14,7567,234,6};
    int i;
    int n = sizeof(a) / sizeof(a[0]);
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
        cout <<a[i]<< " ";
    return 0;
}
