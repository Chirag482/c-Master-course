#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    //intialising of while loop
    int i=1;
    int sum = 0;
    while(i<=N)  //while loop condition
    {
        //actions to performed in while loop
        sum += i;
        i ++;
    }
    cout<<sum<<endl;
}
