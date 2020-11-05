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
int factors(int n){
    int prime[n+1] = {0};
    genrateprime(prime,n+1);
    int ans = 1;

    int prime_index = 1;

    for(int i=prime[0];i*i<=n;){
        if(n%i==0){
            int pow = 1;
            while(n%i==0){
                pow++;
                n = n/i;
            }
            ans *= pow;
        }
        i = prime[prime_index];
        prime_index++;
    }
    if(n!=1){
        ans *= 2;
    }
    return ans;
}
int main()
{
    //generate prime numbers till n;
    int n;
    cin>>n;

    cout<<factors(n);

    return 0;

}
