#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, i, k, temp = 0, ans = -1, q;
		long long sum = 0;
		cin>>n>>k;
		//vector<int> q(n);
		for(int i = 0; i < n; i++){
			cin>>q;
			sum = (sum % 1000000000) + q;
			q += temp;
			if(q < k && ans == -1){
				ans = i + 1;
				sum -= q;
				temp = 0;
			}
			else{
				sum -= k;
				temp = q - k;
			}
		}
		if(ans == -1){
			//ans = i;
			ans = n + (sum / k) + 1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
