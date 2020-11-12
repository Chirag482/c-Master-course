#include<iostream>
#include<string>
#include<set>
using namespace std;

void generate(char inp[],int i,set<string> &s){
    //base case
    if(inp[i]=='\0'){
        string t(inp);
        s.insert(t);
        return;
    }
    //recursive case
    for(int j=i;inp[j]!='\0';j++){
        swap(inp[i],inp[j]);
        generate(inp,i+1,s);
        swap(inp[i],inp[j]);
    }
    return;
}
int main() {
    char inp[10];
    cin>>inp;
    set<string> s;
    generate(inp,0,s);
    for(auto str:s){
        cout<<str<<" ";
    }
    return 0;
}
