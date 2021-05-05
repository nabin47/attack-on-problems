#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
 
using namespace std;

int main() {
    int n, a, b, i, c = 0, signal = 0;
    long long sum = 0;
    cin>>n>>a>>b;
    vector<int> x(n);

    for(i = 0; i < n; i++) {
        cin>>x[i];
        
        sum += x[i];
    }
    int div = x[0] * a, pre = x[0];
    sort(x.begin(), x.end());
    if((div / sum) >= b) {
        cout<<0<<endl;
    }
    else{
        for(i = n - 1; i >= 0; i--) {
            if(x[i] == pre and signal == 0) {
                signal = 1;
                continue;
            }
            sum -= x[i];
            c++;
            if((div / sum) >= b) break;
        }
        cout<<c<<endl;
    }
    return 0;
}