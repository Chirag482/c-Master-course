#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for (int i=0;i<N;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to find"<<endl;
    cin>>key;
    //Binary search => it should be always used on sorted array

    int mid;
    int s=0,e=N-1;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == key){
            break;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else
            s = mid+1;
    }
    cout<<key<<" is found at "<<mid+1<<" position in the array"<<endl;


}
