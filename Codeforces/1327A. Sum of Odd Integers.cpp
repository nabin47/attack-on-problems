#include <iostream>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long n, k;
		cin>>n>>k;
		if((k * k <= n) && ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0))){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
