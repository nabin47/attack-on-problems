#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int n;
	string s, t;
	cin>>n>>t;
	s = t;
	if (t != "10"){
		for(int i = 0; i < n - 1; i++){
			s += '0';
		}
	}
	else if(t == "10"){
		if(n < 2){
			cout<<-1<<endl;
			return 0;
		}
		for(int i = 0; i < n - 2; i++){
			s += '0';
		}
	}
	cout<<s<<endl;
	return 0;
}
