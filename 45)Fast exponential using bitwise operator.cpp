#include<iostream>
using namespace std;
int main()
{
    //time complexibility = o(log(n)) because number of set bits of a number (n)is eual to log(n)
    int a,n;
    cin>>a>>n;
    int ans = 1;
    while(n>0){
        if(n&1){
            ans *= a;
        }
        a = a*a;
        n = n>>1;
    }
    cout<<ans;
    return 0;
}
