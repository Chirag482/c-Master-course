#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mul = 1;
    long long ans = 0;
    while(n>0){
        int a = ((n&1)>0)?1:0;
        ans += a*mul;
        mul = mul*10;
        n=n>>1;
    }
    cout<<ans;
    return 0;
}
