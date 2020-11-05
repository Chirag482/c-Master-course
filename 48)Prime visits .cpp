#include<iostream>
using namespace std;

void primee(int *a){
	for(int i=3;i<=1000000;i+=2){
		a[i] = 1;
	}
	for(long long i=3;i<=1000000;i++){
		if(a[i] == 1){
			for(long long j=i*i;j<=1000000;j+=i){
				a[j] = 0;
			}
		}
	}
	a[0] = a[1] = 0;
	a[2] = 1;
}
int main() {
	int a[1000005] = {0};
	primee(a);
	int t;
	cin>>t;
	int cum_arr[1000005] = {0};
	for(int i=1;i<1000000;i++){
		cum_arr[i] = cum_arr[i-1]+a[i];
	}
	while(t>0){
		int aa,b;
		cin>>aa>>b;
		int ans = cum_arr[b]-cum_arr[aa-1];
		cout<<ans<<endl;
		t--;
	}
	return 0;
}
