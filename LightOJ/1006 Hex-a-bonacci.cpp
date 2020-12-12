#include <iostream>
#include <vector>
using namespace std;
 
int a, b, c, d, e, f;
long long fn( int n ) {
    if (n <= 5){
	    if( n == 0 ) return a;
	    if( n == 1 ) return b;
	    if( n == 2 ) return c;
	    if( n == 3 ) return d;
	    if( n == 4 ) return e;
	    if( n == 5 ) return f;
    }
    vector<long long> ans(n + 1, 0);
    int i, j;
    ans[0] = a, ans[1] = b, ans[2] = c, ans[3] = d, ans[4] = e, ans[5] = f;
    for(j = 6; j <= n; j++){
		for(i = 1; i <= 6; i++){
			ans[j] = (ans[j] + ans[j - i]) % 10000007;
		}
    }
    return ans[j - 1];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
