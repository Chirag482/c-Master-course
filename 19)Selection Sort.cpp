#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    //Selection Sort
    for(int i=0;i<N-1;i++){
        int min = i;
        for(int j=i;j<N;j++){
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        //swap
        //int temp = arr[i];
        //arr[i] = arr[min];
        //arr[min] = temp;
        swap(arr[i],arr[min]);
    }


    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}
