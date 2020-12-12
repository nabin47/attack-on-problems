#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n, k, i, j, ind = -1, sum = 0, min_sum = 1e9;
	cin>>n>>k;
	vector<int> h(n);
	for(i = 0; i < n; i++){
		cin>>h[i];
		if(i < k) sum += h[i];
	}
	//cout<<sum<<endl;
	for(i = 0, j = k - 1; j < n; i++, j++){
		if(i != 0){
			sum -= h[i - 1];
			sum += h[j];
		}
		if(sum < min_sum){
			min_sum = sum;
			ind = i;
		}	
	}
	cout<<ind + 1<<endl;
	return 0;
}
