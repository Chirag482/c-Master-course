#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int row=1;row<=n;row++){
        char ch ='A';
        for(int dig=1;dig<=n+1-row;dig++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
