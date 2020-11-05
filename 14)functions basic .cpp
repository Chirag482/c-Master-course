#include<iostream>
using namespace std;

//funtion defination
void sayhello()
{
    cout<<"Hello you are in sayhello function"<<endl;

}

int main()
{
    cout<<"before funtion"<<endl;
    //function call
    sayhello();
    cout<<"after function"<<endl;
    return 0;
}
