#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, i = 0, j = 0;
	long long d, ans = 0, temp = 0;
	cin>>n>>d;
	vector<pair<long long, long long> > a;
	for(i = 0; i < n; i++){
		long long x, y;
		cin>>x>>y;
		a.push_back(make_pair(x, y));
	}
	sort(a.begin(), a.end());
	temp = a[0].second;
	for(i = 0, j = i + 1; j < n && i < n; ){
		if(a[j].first - a[i].first < d) temp += a[j++].second;
		else {
			ans = max(temp, ans);
			temp -= a[i].second;
			i++;
		}
	}
	ans = max(ans, temp);
	cout<<ans<<endl;
	return 0;
}