#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int k;
    cin>>k;


    //Staircase Search
    //Used only in sorted array => Sorted row-wise and column-wise respectively
    int i=0,j=m-1;
    while(arr[i][j] != k ){
        if(arr[i][j] < k){
            i++;
        }
        else {
            j--;
        }

    }
    cout<<arr[i][j]<<" at ";
    cout<<i<<","<<j;
    return 0;
}
