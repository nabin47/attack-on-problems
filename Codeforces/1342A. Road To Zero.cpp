#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long x, y, a, b;
		cin>>x>>y>>a>>b;
		long long ans1, ans2, ans3, ans, ma, mi;
		ma = max(x, y);
		mi = min(x, y);
		ans1 = (mi * b) + ((ma - mi) * a);
		ans2 = (x * a) + (y * a);
		ans3 = ((ma - mi) * a) + (ma * b);
		ans = min(ans1, min(ans2, ans3));
		cout<<ans<<endl;
	}
	return 0;
}
