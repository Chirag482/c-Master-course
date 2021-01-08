#include<iostream>
#include<queue>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;
    person(string n,int a){
        name = n;
        age = a;
    }
};

class personcompare{
public:
    bool operator()(person A,person B){
        return A.age < B.age;
    }
};
int main(){
    int n;
    cin>>n;

    priority_queue<person,vector<person>,personcompare> pq;
    for(int i=0;i<n;i++){
        string name;
        int age;
        cin>>name>>age;
        person p(name,age);
        pq.push(p);
    }

    int k = 3;
    for(int i=0;i<k;i++){
        cout<<pq.top().name<<" "<<pq.top().age<<endl;
        pq.pop();
    }
    return 0;
}
