
#include <iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,N);
    for(int i=0;i<N;i++)
        cout<<arr[i]<<" ";
    return 0;
}
