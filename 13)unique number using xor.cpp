#include <iostream>
using namespace std;

int main()
{
// with the help xor function we reduces the size of program which could be increased using array
    int N;
    cin>>N;
    int ans = 0;
    while(N>0){
        int num;
        cin>>num;
        ans = ans ^ num;
        N--;
    }
    cout<<ans;
    return 0;
}
