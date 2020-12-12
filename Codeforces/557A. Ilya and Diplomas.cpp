#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n, i;
	cin>>n;
	vector<pair<int, int> > a;
	for(i = 0; i < 3; i++){
		int x, y;
		cin>>x>>y;
		a.push_back(make_pair(x, y));
	}
	long long sum = 0;
	vector<int> x(3, 0);
	for(i = 0; i < 3; i++){
		x[i] = a[i].first;
		sum += a[i].first;
	}
	for(i = 0; i < 3 && sum < n; i++){
		if(a[i].second - x[i] <= (n - sum)){
			x[i] = a[i].second;
			sum -= a[i].first;
			sum += x[i];
		}
		else if(a[i].second - x[i] > (n - sum)){
			x[i] += n - sum;
			sum += (n - sum);
			break;
		}
	}
	for(i = 0; i < 3; i++) cout<<x[i]<<" ";
	cout<<endl;
	return 0;
}
