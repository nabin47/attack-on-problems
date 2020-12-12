#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long a, b, ans = 0;
		cin>>a>>b;
		if(a % 2 == 0 && b % 2 == 0){
			ans = (a/2) * (b/2) * 2;
		}
		else if(a % 2 != 0 && b % 2 == 0){
			ans = ((a / 2) + 1) * b/2;
			ans += (a/2) * (b/2);
		}
		else if(a % 2 == 0 && b % 2 != 0){
			ans = (a / 2) * (b/2);
			ans += (a/2) * ((b/2) + 1);
		}
		else {
			ans = (a / 2) * (b/2);
			ans += ((a/2) + 1) * ((b/2) + 1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
