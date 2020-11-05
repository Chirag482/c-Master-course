#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    if(n==1){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort(a,n-1);
}
void bubble_sort_recursively(int a[],int j,int n)
{
    if(n==1){
        return;
    }
    if(j==n-1){
        return bubble_sort_recursively(a,0,n-1);
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    return bubble_sort_recursively(a,j+1,n);
}
int main()
{
    int arr[] ={5,1,3,1,2};
    int n=5;
    bubble_sort_recursively(arr,0,n);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
