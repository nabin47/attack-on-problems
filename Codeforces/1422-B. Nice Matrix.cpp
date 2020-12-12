#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n, m, i , j;
		long long med = 0, stp = 0;
		cin>>n>>m;
		vector<vector<long long> > a;
		for(i = 0; i < n; i++){
			vector<long long> x(m);
			for(j = 0; j < m; j++){
				cin>>x[j];
			}
			a.push_back(x);
		}
		int p = n - 1, q = 0;
		i = 0;
		while(i <= p){
			j = 0, q = m - 1;
			while(j <= q){
				vector<long long> y;
				y.push_back(a[i][j]);
				if(i != p && j != q){
					y.push_back(a[p][q]);
				}
				if(j != q){
					y.push_back(a[i][q]);
				}
				if(i != p){
					y.push_back(a[p][j]);
				}
				sort(y.begin(), y.end());
				int d = y.size() / 2;
				for(int k = 0; k < y.size(); k++){
					stp += abs(y[k] - y[d]);
				}
				j++; q--;
			}
			i++; p--;
		}
		cout<<stp<<endl;
	}
	return 0;
}
