#include<iostream>
using namespace std;

int partition(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot_elem = a[e];
    while(j<e){
        if(a[j]<=pivot_elem){
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quiksort(int *a,int s,int e)
{
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    //left part
    quiksort(a,s,p-1);
    //right part
    quiksort(a,p+1,e);
}
int main()
{
    int arr[] = {2,7,8,6,1,5,4};
    int n=sizeof(arr)/sizeof(int);
    quiksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
