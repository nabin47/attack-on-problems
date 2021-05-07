#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n, q, i;
    long long x, a, sum = 0;
    long long big = (10e9) + 7;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        sum = (sum + a) % big;
    }
    cin>>q;
    for(int i = 0; i < q; i++) {
        cin>>x;
        sum = fmod((sum + sum), big);
        cout<<sum<<endl;
    }
    return 0;
}