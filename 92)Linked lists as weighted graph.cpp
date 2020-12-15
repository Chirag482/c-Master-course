#include<iostream>
#include<list>
using namespace std;

int main(){

    //lists to create a grapg data structure
    list<pair<int,int> > *l;
    int n;
    cin>>n;
    //here l is a pointer to a array oof n lists
    l = new list<pair<int,int> > [n];

    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int x,y,wt;
        cin>>x>>y>>wt;

        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }


    //print the linked lists
    for(int i=0;i<n;i++){
        cout<<"Linked List "<<i<<"-> ";
        //print every linked lists
        for(auto xp:l[i]){
            cout<<"("<<xp.first<<","<<xp.second<<"),";
        }
        cout<<endl;
    }

    return 0;
}
