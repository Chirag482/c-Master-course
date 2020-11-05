#include<iostream>
using namespace std;
void genrateprime(int *a,int n){
    for(int i=3;i<n;i+=2){
        a[i] = 1;
    }
    for(long long i=3;i<n;i++){
        if(a[i]==1){
            for(long long j=i*i;j<n;j+=i){
                a[j] = 0;
            }
        }
    }
    a[2] = 1;
    a[0] = a[1] = 0;
}
int main()
{
    //generate prime numbers till n;
    int n;
    cin>>n;
    int a[n+1] = {0};
    genrateprime(a,n+1);

    for(int i=0;i<=n;i++){
        if(a[i]==1){
            cout<<i<<" ";
        }
    }
    return 0;

}
