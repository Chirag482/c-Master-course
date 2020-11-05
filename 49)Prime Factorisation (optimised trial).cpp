#include<iostream>
using namespace std;
void genrateprime(int *prime,int n){
    int primes[n+1] = {0};
    for(int i=3;i<n;i+=2){
        primes[i] = 1;
    }
    for(long long i=3;i<n;i++){
        if(primes[i]==1){
            for(long long j=i*i;j<n;j+=i){
                primes[j] = 0;
            }
        }
    }
    primes[2] = 1;
    primes[0] = primes[1] = 0;

    int index = 0;
    for(int i=0;i<n;i++){
        if(primes[i] == 1){
            prime[index] = i;
            index++;
        }
    }
}
void factors(int* fac,int n){
    int prime[n+1] = {0};
    genrateprime(prime,n+1);

    int index = 0;
    int prime_index = 1;
    for(int i=prime[0];i*i<=n;){
        if(n%i==0){
            fac[index] = i;
            index++;
            while(n%i==0){
                n = n/i;
            }
        }
        i = prime[prime_index];
        prime_index++;
    }
    if(n!=1){
        fac[index] = n;
    }
}
int main()
{
    //generate prime numbers till n;
    int n;
    cin>>n;
    int fac[n] = {0};
    factors(fac,n);
    for(int i=0;fac[i]!=0;i++){
        cout<<fac[i]<<" ";
    }
    return 0;

}
