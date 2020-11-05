#include<iostream>
using namespace std;
int main()
{
    int num,decimals_num;
    cin>>num>>decimals_num;
    float ans = 0;
    float inc = 1.0;
    for (int i=0;i<=decimals_num;i++)
    {
        while(ans * ans <= num){
            ans += inc;
        }
        ans -= inc;
        inc = inc/10;
    }
    cout<<ans;
    return 0;
}
