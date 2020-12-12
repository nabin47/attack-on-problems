#include <iostream>
using namespace std;
 
int main() {
	int d1, v1, d2, v2, p;
	cin>>d1>>v1>>d2>>v2>>p;
	int i, vac = 0;
	for(i = 1; ; i++){
		if(i >= d1) vac += v1;
		if(i >= d2) vac += v2;
		if(vac >= p) break;
	}
	cout<<i<<endl;
	return 0;
}
