#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k, i, j, cnt = 0, ans = 0;
	cin>>n>>m>>k;
	m++;
	vector<int> x(m);
	for(i = 0; i < m; i++){
		cin>>x[i];
	}
	int d = x[i-1];
	for(i = 0; i < m - 1; i++){
		d = x[m - 1];
		cnt = 0;
		for(j = 0; j < n; j++){
			if((d & 1) != (x[i] & 1)) cnt++;
			d = d >> 1;
			x[i] = x[i] >> 1;
		}
		if(cnt <= k) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
