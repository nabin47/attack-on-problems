#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, i, j;
		cin>>n;
		vector<long long> b(n);
		for(i = 0; i < n; i++){
			cin>>b[i];
		}
		if(n == 1){
			cout<<b[0]<<endl;
			continue;
		}
		for(i = 0, j = n - 1; i < j; i++, j--){
			cout<<b[i]<<" "<<b[j]<<" ";
		}
		if(n % 2 != 0) cout<<b[i];
		cout<<endl;
	}
	return 0;
}