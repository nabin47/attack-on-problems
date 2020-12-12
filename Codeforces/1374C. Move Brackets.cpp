#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, i, tot = 0, stp = 0;
		string s;
		cin>>n>>s;
		for(i = 0; i < n; i++){
			if(s[i] == '('){
				tot++;
			}
			else{
				tot--;
			}
			if(tot < 0)
				stp = max(stp, abs(tot));
		}
		cout<<stp<<endl;
	}
	return 0;
}
