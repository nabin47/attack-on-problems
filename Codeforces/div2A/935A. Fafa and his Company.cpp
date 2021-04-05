#include <iostream>
using namespace std;

int main() {
	int n, way = 0, i = 1, d = 0;
	cin>>n;
	d = n / 2;
	while(i <= d){
		if((n - i) % i == 0){
			way++;
		}
		i++;
	}
	cout<<way<<endl;
	return 0;
}