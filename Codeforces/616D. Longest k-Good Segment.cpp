#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main() {
	int n, k, i, j;
	int maxlen = 0, start = 0, end = 0;
	scanf("%d %d", &n, &k);
	vector<int> a(n+1, 0);
	for(i = 1; i <= n; i++){
		int x;
		scanf("%d", &x);
		a[i] = x;
	}
	map<int, int> mp;
	for(i = 1, j = 1; j <= n; j++){
		//mp.insert(pair<int, int>(a[j], j));
		mp[a[j]] = j;
		while(mp.size() > k){
			while(i < j && mp[a[i]] != i) i++;
			mp.erase(a[i++]);
		}
		int temp = max(maxlen, j- i + 1);
		if(maxlen < temp){
			maxlen = temp;
			start = i;
			end = j;
		}
	}
	printf("%d %d\n",start , end);
	return 0;
}
