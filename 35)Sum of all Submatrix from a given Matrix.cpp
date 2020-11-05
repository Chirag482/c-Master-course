#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number of rows and columns"<<endl;
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter Elements of array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int sum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += arr[i][j] * ( ((i+1) * (j+1)) * ((n-i) * (m-j)) );
        }
    }
    cout<<sum<<endl;
    return 0;
}
