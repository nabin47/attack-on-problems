#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n == 1){
			cout<<0<<endl;
			continue;
		}
		if(n == 2) {cout<<1<<endl; continue;}
		if(n % 2 == 0 || n == 3) {cout<<2<<endl; continue;}
		else {cout<<3<<endl; continue;}
	}
	return 0;
}