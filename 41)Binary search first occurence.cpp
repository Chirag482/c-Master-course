#include<iostream>
using namespace std;

int first_ocur(int a[],int n,int key)
{
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid  = (s+e)/2;
        if(a[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(a[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}
int last_ocur(int a[],int n,int key)
{
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid  = (s+e)/2;
        if(a[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,5,7,7,7,8,8,8,8,14,16};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<"First Occurence "<<first_ocur(arr,n,key)<<endl;
    cout<<"Last Occurence "<<last_ocur(arr,n,key)<<endl;
    return 0;
}
