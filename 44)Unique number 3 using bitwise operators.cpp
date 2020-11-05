#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int no;
	int cnt[64] = {0};
	for(int i=0;i<n;i++){
		cin>>no;
		int j = 0;
		while(no>0){
			int last_bit = no&1;
			cnt[j] += last_bit;
			j++;
			no = no>>1;
		}
	}
	int ans = 0;
	for(int i=0;i<64;i++){
		ans += (cnt[i]%3)*(pow(2,i));
	}
	cout<<ans;
	return 0;
}
