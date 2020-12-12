#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, i, goal = - 10000;
	string s;
	map<string, int> mp;
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>s;
		if(mp[s]) mp[s]++;
		else mp[s] = 1;
	}
	for(auto& x : mp){
		if(x.second > goal) goal = x.second, s = x.first;
	}
	cout<<s<<endl;
	return 0;
}
