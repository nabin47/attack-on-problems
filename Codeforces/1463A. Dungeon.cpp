#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		vector<int> a(3);
		int d = 0;
		for(int i = 0; i < 3; i++){
			cin>>a[i];
			d += a[i];
		}
		sort(a.begin(), a.end());
		if(d % 9 == 0 && (d / 9) <= a[0]){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
