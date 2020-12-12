#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, k, x, y, i;
		cin>>n>>k>>x>>y;
		i = x;
		vector<int> visited(n, 0);
		while(1){
			if(visited[i]){
				cout<<"NO"<<endl;
				break;
			}
			if(i == y){
				cout<<"YES"<<endl;
				break;
			}
			visited[i] = 1;
			i = (i + k) % n;
		}
	}
	return 0;
}
