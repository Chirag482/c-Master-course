#include<iostream>
using namespace std;
void mergeit(int a[],int s,int e)
{
    int temp[1000];
    int mid = (s+e)/2;

    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid and j<=e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    for(int aa=s;aa<=e;aa++){
        a[aa] = temp[aa];
    }
}
void mergesort(int a[],int s,int e)
{
    if(s>=e){
        return;
    }
    int m = (s+e)/2;

    mergesort(a,s,m);
    mergesort(a,m+1,e);

    mergeit(a,s,e);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
