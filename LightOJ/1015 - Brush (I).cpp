#include <iostream>
using namespace std;
 
int main() {
	int t, c = 1;
	cin>>t;
	while(t--){
		int n, sum = 0, x;
		cin>>n;
		while(n--){
			cin>>x;
			if(x >= 0){
				sum += x;
			}
		}
		cout<<"Case "<<c++<<": "<<sum<<endl;
	}
	return 0;
}
