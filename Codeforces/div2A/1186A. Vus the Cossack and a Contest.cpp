#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;
	cin>>n>>m>>k;
	if(min(m, k) >= n) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}