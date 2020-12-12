#include <iostream>
#include <vector>
#include <set>
#define BIG 1e7
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n, k, i, j, ans = BIG;
		cin>>n>>k;
		vector<int> c(n);
		set<int> s;
		for(i = 0; i < n; i++){
			cin>>c[i];
			s.insert(c[i]);
		}
		for(auto it : s){
			int temp = 0;
			for(i = 0; i < n; ){
				if(c[i] != it) {
					temp++;
					i = i + k;
				}
				else i++;
			}
			ans = min(ans, temp);
		}
		cout<<ans<<endl;
	}
	return 0;
}