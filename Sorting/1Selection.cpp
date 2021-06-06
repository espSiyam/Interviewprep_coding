#include <iostream>
using namespace std;

void SelectionSort(int A[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        int iMin = i;
        for(int j=i+1; j<n;j++)
        {
            if(A[j]<A[iMin])
                iMin = j;
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

int main(){
    int A[] = {2,4,7,1,5,3};
    int n = sizeof(A)/sizeof(A[0]);
    SelectionSort(A,6);
    for(int i = 0; i<n; i++ )
        cout <<A[i]<< " ";
}
