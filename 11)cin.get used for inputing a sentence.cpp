#include<iostream>
using namespace std;

int main()
{
    char ch;
    do{
        ch = cin.get();     //cin.get is used to read speacial characters as well which is being ignored by cin method.
        cout<<ch;
    }while(ch != '.');
    return 0;
}
