#include <iostream>
#include <vector>
#include <map>
#define BIG 1e9
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, i, ind = -1;
		long long ans = BIG;
		cin>>n;
		vector<pair<int, int> > a;
		map<int, int> mp;
		for(i = 1; i <= n; i++){
			int x;
			cin>>x;
			a.push_back(make_pair(x, i));
			if(!mp[x]) mp[x] = 1;
			else mp[x]++;
		}
		//sort(a.begin(), a.end());
		for(i = 0; i < n; i++){
			if(mp[a[i].first] == 1 && ans > a[i].first) {
				ind = a[i].second;
				ans = a[i].first;
			}
		}
		cout<<ind<<endl;
	}
	return 0;
}
