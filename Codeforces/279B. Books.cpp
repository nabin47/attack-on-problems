#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, i, j, ans = 0, temp = 0, cnt = 0;
	long long t, sum = 0;
	cin>>n>>t;
	vector<int> a(n);
	for(i = 0; i < n; i++){
		cin>>a[i];
		//sum += a[i];
	}
	for(i = 0, j = 0; j < n; i++){
		//cnt = 0;
		while(sum <= t && j < n){
			sum += a[j];
			j++;
			cnt++;
		}
		if(sum > t) cnt--;
		sum -= a[i];
		//temp = j - i + 1;
		ans = max(ans, cnt);
	}
	cout<<ans<<endl;
	return 0;
}
