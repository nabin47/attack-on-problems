#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, x, k;
        cin>>n>>x>>k;
        if(x % k == 0 || ((n + 1) - x) % k == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
