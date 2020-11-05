#include<iostream>
using namespace std;
int main()
{
    int **arr;
    int r,c;
    cout<<"Enter number of rows and columns"<<endl;
    cin>>r>>c;

    arr = new int * [r];
    for(int i=0;i<r;i++){
        arr[i] = new int[c]{0};
    }

    int val = 1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j] = val;
            //arr[i][j] means " *(arr+i+j) "
            val++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
