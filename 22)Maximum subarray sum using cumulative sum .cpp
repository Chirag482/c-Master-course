#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int arr[n];
		int cs[n] = {0};
		cin>>arr[0];
		cs[0] = arr[0];
		for(int i=1;i<n;i++){
			cin>>arr[i];
			cs[i] = cs[i-1] + arr[i];
		}
		int max_sum = 0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				int sum = i>0?cs[j] - cs[i-1]:cs[j];

				// for(int k=i;k<=j;k++){
				// 	sum+= arr[k];
				// }
				if(max_sum<sum){
					max_sum = sum;
				}
			}
		}
		cout<<max_sum<<endl;
		t--;
	}
	return 0;
}
