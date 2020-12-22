#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, i = 0, j = 0, k = 0, l = 3, flag = 0, flag2 = 0, cnt = 0;
		cin>>n;
		string s, a = "2020";
		cin>>s;
		if(n < 4) {
			cout<<"NO"<<endl;
			continue;
		}
		if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0') cout<<"YES"<<endl;
		else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0') cout<<"YES"<<endl;
		else if(s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0') cout<<"YES"<<endl;
		else if(s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') cout<<"YES"<<endl;
		else if(s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
