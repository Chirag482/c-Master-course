#include<iostream>
using namespace std;
int main(){
    int F = 0;
    while(F<=300)
    {
        int c;
        c = (5 * (F-32))/9;
        cout<<c<<endl;
        F+= 20;
    }
}
