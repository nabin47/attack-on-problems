#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b;
        cin>>a>>b;
        long long x = a * b, y = a * (b + b);
        long long z  = x + y;
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<" "<<endl;
    }
    return 0;
}