#include <iostream>
#include <map>
#include <vector>
#define BIG 1e9
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n, i, j, ans = BIG;
		cin>>n;
		vector<int> a(n);
		vector<int> b;
		for(i = 0; i < n; i++){
			cin>>a[i];
		}
		b.push_back(a[0]);
		for(i = 1, j = 0; i < n; i++){
			if(b[j] != a[i]){
				b.push_back(a[i]);
				j++;
			}
		}
		map<int, int> mp;
		for(i = 0; i < b.size(); i++){
			if(!mp[b[i]]) mp[b[i]] = 2;
			else mp[b[i]]++;
		}
		mp[b[0]]--;
		mp[b[b.size()-1]]--;
		for(auto it : mp){
			ans = min(ans, it.second);
		}
		cout<<ans<<endl;
	}
	return 0;
}