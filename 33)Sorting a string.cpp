#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a,string b)
{
    if(a.length() == b.length()){
        //if length is same theen sort lexiographically
        return a<b;
    }
    return a.length()>b.length();
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    string s[n];    //Creates am array of n strings
    for(int i=0;i<n;i++){
        getline(cin,s[i]);          //cin.getline() Dosenot work for inputing a string
    }

    /*sort(s,s+n);        //sorts n strings present in array lexiographically  */

    // if we waant to sort the strings by comparing the length then we have to paass an function in hte sort function

    sort(s,s+n,compare);
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
