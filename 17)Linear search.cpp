#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to found in array"<<endl;
    int key;
    cin>>key;
    //Linear search
    int pos;
    for(pos = 0;pos<size;pos++){
        if(arr[pos]==key){
            cout<<key<<" is found at "<<pos+1<<"th position"<<endl;
            break;
        }
    }
    if(pos==size){
        cout<<"Not found";
    }
    return 0;
}
