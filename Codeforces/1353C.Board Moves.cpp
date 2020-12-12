#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long n, i = 1, sum = 0;
		cin>>n;
		long long d = n / 2;
		for(i = 1; i <= d; i++){
			sum += i * i * 8;
		}
		cout<<sum<<endl;
	}
	return 0;
}