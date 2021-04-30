#include<iostream>
#define B 10e9

using namespace std;

int main() {
    int n, q, i;
    long long x, a, sum = 0;
    long long big = B + 7;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        sum = (sum + a) % big;
    }
    cin>>q;
    for(int i = 0; i < q; i++) {
        cin>>x;
        sum = (sum + sum) % big;
        cout<<sum<<endl;
    }
    return 0;
}