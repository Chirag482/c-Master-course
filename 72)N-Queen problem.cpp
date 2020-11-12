#include<iostream>
using namespace std;
bool canWePlace(int board[10][10],int i,int j,int n)
{
    //col check
    for(int row=0;row<n;row++){
        if(board[row][j] == 1){
            return false;
        }
    }

    //left upward diagonal check
    int x = i;
    int y = j;
    while(x>=0 and y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    //right upward diagonal check
    x = i;
    y=j;
    while(x>=0 and y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool solveNQueen(int board[10][10],int i,int n)
{
    //base case
    if(i==n){
        //print
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==0){
                    cout<<"_ ";
                }
                else{
                    cout<<"Q ";
                }
            }
            cout<<endl;
        }
        return true;
        //if we want all possible config return false here by which till end the possible config will also be taked as false
    }
    for(int j=0;j<n;j++){
        if(canWePlace(board,i,j,n)){
            board[i][j] = 1;
            bool nextPlace = solveNQueen(board,i+1,n);
            if(nextPlace){
                return true;
            }
            board[i][j]=0;//backtrack
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int board[10][10] = {0};
    solveNQueen(board,0,n);
    return 0;
}
