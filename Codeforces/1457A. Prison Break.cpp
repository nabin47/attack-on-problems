#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n, m, r, c;
		cin>>n>>m>>r>>c;
		long long diff1 = (n - r) + (m - c);
		long long diff2 = (r - 1) + (c - 1);
		long long diff3 = (n - r) + (c - 1);
		long long diff4 = (r - 1) + (m - c);
		long long ans1 = max(diff1, diff2);
		long long ans2 = max(diff3, diff4);
		cout<<max(ans1, ans2)<<endl;
	}
	return 0;
}