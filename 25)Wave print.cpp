#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter No. Row and Column"<<endl;
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int j;
    for(int i=0;i<col;i++){
        if(i%2==0){
            j =0 ;
            while(j<row){
                cout<<arr[j][i]<<" ";
                j++;
            }
        }
        else{
            j=row-1;
            while(j>=0){
                cout<<arr[j][i]<<" ";
                j--;
            }
        }
    }
    return 0;
}
