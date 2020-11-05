#include<iostream>
using namespace std;

int summ(int a[][100],int n,int m)
{
    //col wise sum
    for(int i=n-1;i>=0;i--){
        for(int j=m-2;j>=0;j--){
            a[i][j] += a[i][j+1];
        }
    }

    //row wise sum
    for(int i=m-1;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            a[j][i] += a[j+1][i];
        }
    }
    int res = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res = max(res,a[i][j]);
        }
    }
    return res;
}
int main()
{
    int r,c;
    cin>>r>>c;
    int a[100][100];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    cout<<summ(a,r,c)<<endl;
    return 0;
}
