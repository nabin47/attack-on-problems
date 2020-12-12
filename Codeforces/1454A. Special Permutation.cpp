#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, i = 0, j = 0;
		cin>>n;
		for(i = 2, j = 0; j < n; j++){
			cout<<i++<<" ";
			if(i > n) i = 1;
		}
		cout<<endl;
	}
	return 0;
}