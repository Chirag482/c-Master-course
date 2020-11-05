#include <iostream>
using namespace std;
int main()
{
    //Used only on Sorted array
    //Print all the pairs having sum Equal to K
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int i=0;
    int j=N-1;
    while(i<j){
        if(arr[i]+arr[j] == k){
            cout<<arr[i]<<" , "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j] > k){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}
