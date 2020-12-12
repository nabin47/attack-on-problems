#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
	int t, c = 1;
	cin>>t;
	while(t--){
		int i = 1, cur = 0, indx, indy;
		long long s, j;
		cin>>s;
		i = ceil(sqrt((double(s))));
		for(j = i - 3; j < i + 4; j++){
			if(s > j * j && s <= (j+1) * (j +1)) break;
		}
		cur = j, i = j + 1;
		long long curS = cur * cur, iS = i * i;
		//long long d, mid = (iS - curS - 1) / 2;
		//d = iS - mid;
		//if(s == d){
		//	indx = i, indy = i;
		//}
		if(i % 2 != 0){
			indx = iS - s + 1;
			indy = s - curS;
			if(indx > i) indx = i;
			if(indy > i) indy = i;
		}
		else{
			indy = iS - s + 1;
			indx = s - curS;
			if(indx > i) indx = i;
			if(indy > i) indy = i;
		}
		cout<<"Case "<<c<<": "<<indx<<" "<<indy<<endl;
		c++;
	}
	return 0;
}
