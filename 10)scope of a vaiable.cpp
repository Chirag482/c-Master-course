#include<iostream>
using namespace std;

int x = 100;    //itialized a global variable

int main()
{
    int x = 10; //intialized a local vaiable

    cout<<x<<endl;  //it will print 10 that is local variable and if we comment line number 8 than it will print 100 that is gloabal variable

    // so we can conclude that when a vaiable is used than the preference for its value is higher for local value than global value

    for(int x=0;x<=5;x++){  //intialiexed a loop scope which means after the execution of for loop this x will be deleted
        cout<<"Loop scope "<<x<<endl;
    }
    cout<<"Local Scope "<<x<<endl;  //print local value that is 10
    cout<<"Global Scope "<<::x<<endl;   //print global value that is 100
}
