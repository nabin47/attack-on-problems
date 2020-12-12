#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, i, j, l;
	cin>>n>>m;
	vector<int> a(n+1, 0);
	set<int> s;
	for(i = 1; i <= n; i++){
		cin>>a[i];
	}
	for(i = n; i > 0; i--){
		s.insert(a[i]);
		a[i] = s.size();
	}
	for(i = 0; i < m; i++){
		cin>>l;
		cout<<a[l]<<endl;
	}
	return 0;
}
