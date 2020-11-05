#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,N);

    return 0;
}
