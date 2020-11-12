#include<iostream>
using namespace std;
bool rat_in_maze(char maze[10][10],int sol[10][10],int i,int j,int m,int n)
{
    if(i==m and j==n){
        sol[i][j] = 1;
        //print the path
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        return true;
    }
    if(i>m or j>n){
        return false;
    }
    if(maze[i][j]=='X'){
        return false;
    }

    //assume that current index is suitable for answers
    sol[i][j] = 1;
    bool rightSuccess = rat_in_maze(maze,sol,i,j+1,m,n);
    bool downSuccess = rat_in_maze(maze,sol,i+1,j,m,n);

    sol[i][j] = 0;
    if(rightSuccess or downSuccess){
        return true;
    }
    return false;
}
int main()
{
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"
    };
    int sol[10][10]={0};
    int m=4,n=4;
    bool ans = rat_in_maze(maze,sol,0,0,m-1,n-1);
    if(!ans){
        cout<<"Path Not Found!"<<endl;
    }
    return 0;
}
