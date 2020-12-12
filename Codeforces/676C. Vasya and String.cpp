#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n, k, i, j;
	int maxlen = 0, a = 0, b = 0;
	cin>>n>>k;
	vector<char> x(n);
	for(i = 0; i < n; i++){
		cin>>x[i];
	}
	for(i = 0, j = 0; j < n; j++){
		if(x[j] == 'a') a++;
		else b++;
		if(a > k && b > k){
			while(i < j && (a > k && b > k)){
				if(x[i] == 'a') a--;
				else b--;
				i++;
			}
		}
		int temp = j - i + 1;
		maxlen = max(maxlen, temp);
	}
	cout<<maxlen<<endl;
	return 0;
}