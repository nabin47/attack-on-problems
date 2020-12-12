#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n, k, i, j;
	int maxlen = 0, temp = 0, start  = 0, end = 0;
	cin>>n>>k;
	vector<int> a(n);
	for(i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0, j = 0; j < n; j++){
		if(a[j] == 0) temp++;
		if(temp > k){
			while(i < j && a[i] != 0) i++;
			temp--;
			i++;
		}
		int t_length = max(maxlen, j - i + 1);
		if(maxlen < t_length){
			maxlen = t_length;
			start = i;
			end = j;
		}
	}
	cout<<maxlen<<endl;
	for(int k = 0; k <n; k++){
		if(k >= start && k <= end && maxlen > 0) cout<<1<<" ";
		else cout<<a[k]<<" ";
	}
	cout<<endl;
	return 0;
}
