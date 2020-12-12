#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, n, i, j;
	cin>>t;
	for(i = 0; i < t; i++){
		cin>>n;
		vector<int> a(n);
		for(j = 0; j < n; j++){
			cin>>a[j];
		}
		for(j = 0; j + 1 < n; j += 2){
			if(a[j] > 0 && a[j+1] > 0) cout<<"-"<<a[j+1]<<" "<<a[j]<<" ";
			else if(a[j] < 0 && a[j + 1] < 0) cout<<a[j+1]<<" "<<abs(a[j])<<" ";
			else cout<<abs(a[j+1])<<" "<<abs(a[j])<<" ";
		}
		cout<<endl;
	}
	return 0;
}
