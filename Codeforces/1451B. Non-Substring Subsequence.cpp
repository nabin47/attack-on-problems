#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, q, i;
		string s;
		cin>>n>>q;
		cin>>s;
		vector<pair<int, int> >a;
		for(i = 0; i < q; i++){
			int l, r;
			cin>>l>>r;
			a.push_back(make_pair(l, r));
		}
		for(i = 0; i < q; i++){
			string target = s.substr(a[i].first - 1, a[i].second - a[i].first + 1);
			int length = a[i].second - a[i].first + 1;
			if (length > n || length < 2) {
			    cout<<"NO"<<endl;
			    continue;
			}
        	int k = 0, j = 0, ind = 0;
        	int n1 = length, n2 = s.size();
        	while ((j < length) && (k < n)) {
	            if (s[k] == target[j]) {
	                k ++;
	                j ++;
	            } else {
	                k ++;
	                if(j > 0) ind++;
	            }
	            if(ind == 0 && j == length && k < n){
	            	j--;
	    			ind++;
	            }
        	}
        	if(j == length && ind > 0) cout<<"YES"<<endl;
        	else cout<<"NO"<<endl;
		}
	}
	return 0;
}