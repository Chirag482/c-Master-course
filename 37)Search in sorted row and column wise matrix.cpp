#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of rows and column"<<endl;
    int r,c;
    cin>>r>>c;
    int a[100][100];
    cout<<"Enter the elements of the matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the element you want to find"<<endl;
    bool found = false;
    int key;
    cin>>key;
    int i=0,j=c-1;
    while(a[i][j] != key and j>=0 and i<r){
        if(a[i][j]>key){
            j--;
        }
        else if(a[i][j] < key){
            i++;
        }
    }
    if(a[i][j] == key){
        cout<<key<<" is present at "<<i<<","<<j<<endl;
    }
    else{
        cout<<key<<" not found"<<endl;
    }
    return 0;
}
