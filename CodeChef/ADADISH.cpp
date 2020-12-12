#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	int t, i, j;
	cin>>t;
	while(t--){
		int n;
		long long sum = 0, tmp_sum = 0, temp = 0, m1 = 0, m2 = 0;
		cin>>n;
		vector<int> a(n);
		for(i = 0; i < n; i++) cin>>a[i];
		sort(a.begin(), a.end());
		if(n <= 2){
			if(n == 1) cout<<a[0]<<endl;
			else cout<<max(a[0], a[1])<<endl;
			continue;
		}
		m1 = a[n - 1];
		m2 = a[n - 2]; 
		for(i = n - 3; i >= 0; i--){
			if(m1 < m2) m1 += a[i];
			else m2 += a[i];
		}
		sum = max(m1, m2);
		cout<<sum<<endl;
	}
	return 0;
}
