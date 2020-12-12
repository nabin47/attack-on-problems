#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, d, i, a;
		int risk = 0, non_risk = 0, ans = 0;
		cin>>n>>d;
		//vector<int> a(n);
		for(i = 0; i < n; i++){
			cin>>a;
			if(a >= 80 || a <= 9) risk++;
			else non_risk++;
		}
		if(risk % d == 0) ans += risk / d;
		else ans += (risk / d) + 1;
		if(non_risk % d == 0) ans += non_risk / d;
		else ans += (non_risk / d) + 1;
		cout<<ans<<endl;
	}
	return 0;
}
