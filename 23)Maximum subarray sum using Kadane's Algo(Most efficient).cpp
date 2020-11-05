#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int cs = 0;
    int maxs = INT_MIN;
    for(int i=0;i<N;i++){
        cs += arr[i];
        if(cs<0){
            cs = 0;
        }
        maxs = max(cs,maxs);

    }
    cout<<"The maximum subarray sum is : "<<maxs<<endl;
    return 0;
}
