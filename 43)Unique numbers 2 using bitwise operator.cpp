#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int res = 0;
	for(int i=0;i<N;i++){
		res = res^arr[i];
	}
	int tres = res;
	int pos = 0;
	int bit = 0;
	while(bit!=1){
		bit = ((res&1)>0)?1:0;
		res = res>>1;
		pos++;
	}
	pos--;
	int ans_a[N];
	int j = 0;
	for(int i=0;i<N;i++){
		if(arr[i]&(1<<pos)>0){
			ans_a[j] = arr[i];
			j++;
		}
	}
	int first_ans = 0;
	for(int i=0;i<j;i++){
		first_ans = first_ans^ans_a[i];
	}
	int second_ans = tres^first_ans;

	if(first_ans<second_ans){
		cout<<first_ans<<" "<<second_ans;
	}
	else{
		cout<<second_ans<<" "<<first_ans;
	}
	return 0;
}
