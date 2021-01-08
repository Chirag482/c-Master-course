#include<iostream>
#include<vector>
using namespace std;

class heap{

    vector<int> v;
    bool minheap;

    bool compare(int a,int b){
        if(minheap){
            return a<b;
        }
        return a>b;
    }

    void heapify(int idx){
        int left = 2*idx;
        int right = left+1;

        int min_idx = idx;
        int last = v.size()-1;
        if(left<=last && compare(v[left],v[idx])){
            min_idx = left;
        }
        if(right<=last && compare(v[right],v[min_idx])){
            min_idx = right;
        }
        if(min_idx!=idx){
            swap(v[idx],v[min_idx]);
            heapify(min_idx);
        }
    }
public:
    heap(int default_size = 10,bool type = true){
        v.reserve(default_size);
        v.push_back(-1);
        minheap = type;
    }
    void push(int d){
        v.push_back(d);
        int ind = v.size()-1;
        int parent = ind/2;

        while(ind>1 and compare(v[ind],v[parent])){
            swap(v[ind],v[parent]);
            ind = parent;
            parent = ind/2;
        }
    }

    int top(){
        //return the root element
        return v[1];
    }
    void pop(){
        int last = v.size() - 1;
        swap(v[1],v[last]);
        v.pop_back();
        heapify(1);
    }

    bool empty(){
        return v.size()==1;
    }
};

int main(){
    //give some init size , type
    heap h;
    //for max heap => heap h(10,false)
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        h.push(num);
    }
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    return 0;
}
