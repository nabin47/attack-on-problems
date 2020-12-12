#include <iostream>
#include <map>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n, i, x, m = -1;
		cin>>n;
		map<int, int> mp;
		for(i = 0; i < n; i++){
			cin>>x;
			if(mp[x]) mp[x]++;
			else mp[x] = 1;
		}
		for(auto &x : mp){
			if (x.second > m){
				m = x.second;
			}
		}
		int s = mp.size(), ans;
		if(s == m) ans = s - 1;
		else ans = min(s, m);
		cout<<ans<<endl;
	}
	return 0;
}
