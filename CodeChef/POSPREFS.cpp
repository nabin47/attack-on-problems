//This is a prefix sum problem. 


#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, k, i;
		cin>>n>>k;
		vector<int> a(n+1, 0);
		for(i = 1; i <= n; i++){
			if(i % 2 == 0) a[i] = -i;
			else a[i] = i;
		}
		int diff = ceil((double)n / 2.0) - k;
		i = n;
		if(diff < 0){
			while(diff < 0){
				if(a[i] < 0){
					a[i] *= -1;
					diff++;
				}
				i--;
			}
		}
		else{
			while(diff > 0){
				if(a[i] > 0){
					a[i] *= -1;
					diff--;
				}
				i--;
			}
		}
		for(i = 1; i <= n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}