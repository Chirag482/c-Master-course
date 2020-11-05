#include<iostream>
using namespace std;
int pos(int a[],int s,int e,int num)
{
    int m = (s+e)/2;
    if(a[m] == num){
        return m;
    }
    if(a[m]>num){
        pos(a,s,m-1,num);
    }
    else{
        pos(a,m+1,e,num);
    }
}
int main()
{
    int arr[] = {1,4,6,76,86};
    int n = sizeof(arr)/sizeof(int);
    cout<<pos(arr,0,n-1,76);
    return 0;
}
