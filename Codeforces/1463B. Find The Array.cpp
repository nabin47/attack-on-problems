#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n, i;
		cin>>n;
		long long sum_odd = 0, sum_even = 0;
		vector<int> a;
		for(i = 0; i < n; i++){
			int b;
			cin>>b;
			a.push_back(b);
			if(i % 2 == 0){
				sum_odd += b;
			}
			else sum_even += b;
		}
		long long s = sum_odd + sum_even;
		if(sum_odd <= s / 2){
			for(i = 0; i < n; i++){
				if(i % 2 != 0) cout<<a[i]<<" ";
				else cout<<1<<" ";
			}
		}
		else {
			for(i = 0; i < n; i++){
				if(i % 2 == 0) cout<<a[i]<<" ";
				else cout<<1<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}