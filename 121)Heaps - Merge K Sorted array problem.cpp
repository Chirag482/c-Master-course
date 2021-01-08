#include<iostream>
#include<vector>
#include<queue>
using namespace std;


typedef pair<int,pair<int,int> > node;

vector<int> mergeksortedarrays(vector<vector<int> >arr){
    vector<int> result;
    priority_queue<node,vector<node>,greater<node> > pq;

    //insert the 0th element of every array in the pq
    for(int i=0;i<arr.size();i++){
        pq.push({arr[i][0],{i,0}});
    }
    //remove the element one by one from the min heap and add to result vector

    while(!pq.empty()){
        node current = pq.top();
        pq.pop();
        int element = current.first;
        int x = current.second.first;
        int y = current.second.second;

        result.push_back(element);

        if(y+1<arr[x].size()){
            pq.push({arr[x][y+1],{x,y+1}});
        }
    }
    return result;
}
int main(){
    vector<vector<int>> arr{{2,6,12,15},
                            {1,3,14,20},
                            {3,5,8,10}};

    vector<int> output = mergeksortedarrays(arr);
    for(auto x:output){
        cout<<x<<" ";
    }

}
