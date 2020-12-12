#include <iostream>
#include <math.h>
#include <iomanip>
#define PRECISION 1e-9
using namespace std;
 
int main() {
	int t, c = 1;
	cin>>t;
	while(t--){
		double r, pi = 2.0 * acos (0.0), pre = PRECISION, ans = 0.0;
		cin>>r;
		ans = ((r + r) * (r + r)) - (pi * r * r) + pre;
		cout<<fixed<<setprecision(2)<<"Case "<<c++<<": "<<ans<<endl;
	}
	return 0;
}